namespace GcodeLean

--- Configuration for the CNC machine
structure BoundsConfig where
  xMin : Float := 0.0
  xMax : Float := 200.0
  yMin : Float := 0.0
  yMax : Float := 200.0
  zMin : Float := 0.0
  zMax : Float := 20.0
  deriving Repr, BEq

end GcodeLean
