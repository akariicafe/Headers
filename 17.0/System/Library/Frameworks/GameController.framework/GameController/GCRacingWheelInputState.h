@class GCSteeringWheelElement, GCGearShifterElement;
@protocol GCButtonElement;

@interface GCRacingWheelInputState : _GCDevicePhysicalInputFacade

@property (readonly) GCSteeringWheelElement *wheel;
@property (readonly) id<GCButtonElement> acceleratorPedal;
@property (readonly) id<GCButtonElement> brakePedal;
@property (readonly) id<GCButtonElement> clutchPedal;
@property (readonly) GCGearShifterElement *shifter;

@end
