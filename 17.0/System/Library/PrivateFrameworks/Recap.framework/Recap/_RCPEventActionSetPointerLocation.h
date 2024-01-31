@interface _RCPEventActionSetPointerLocation : RCPEventAction

@property (nonatomic) struct CGPoint { double x; double y; } modelPoint;

- (void)play;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
