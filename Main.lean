import GcodeLean.AST
import GcodeLean.State
import GcodeLean.Step

open GcodeLean

def program : List GCode :=
  [ .G90,
    .G0 (some 0) (some 0) (some 0) (some 1200),
    .G0 none none (some 2) none,
    .G0 (some 21) (some 5) none none,
    .M3,
    .G1 (some 2) (some 4) (some 1) none,
    .G91,
    .G1 none (some 2) none none,
    .M5 ]

#eval runProgram {} program
