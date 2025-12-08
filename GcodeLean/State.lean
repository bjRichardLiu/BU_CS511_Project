import GcodeLean.Config

namespace GcodeLean

inductive DistanceMode
  | absolute
  | relative
  deriving Repr, BEq

structure ControllerState where
  x : Float := 0.0
  y : Float := 0.0
  z : Float := 0.0
  spindleOn : Bool := false
  feedRate : Int := 0
  distMode : DistanceMode := DistanceMode.absolute
  bounds : BoundsConfig := {}
  deriving Repr, BEq

end GcodeLean
