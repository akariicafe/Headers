@interface MNTrafficIncidentTriggerPoint : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) struct { unsigned int index; float offset; } referenceCoordinate;
@property (readonly, nonatomic) BOOL allowsShifting;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithReferenceCoordinate:(struct { unsigned int x0; float x1; })a0 allowsShifting:(BOOL)a1;
- (BOOL)shouldActivateForLocation:(id)a0;

@end
