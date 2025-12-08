namespace GcodeLean

inductive GCode
  | G0 (X? : Option Float) (Y? : Option Float) (Z? : Option Float) (F? : Option Int)
  | G1 (X? : Option Float) (Y? : Option Float) (Z? : Option Float) (F? : Option Int)
  | G90
  | G91
  | M3
  | M5
  deriving Repr, BEq

end GcodeLean
