@interface HUQuickControlPanningContext : NSObject

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } controlFrame;
@property (nonatomic) double initialSliderValue;
@property (nonatomic) double verticalDragCoefficient;
@property (nonatomic) BOOL requiresSomeMovementBeforeActivation;

- (id)init;
- (void)assertConfigurationIsValid;

@end
