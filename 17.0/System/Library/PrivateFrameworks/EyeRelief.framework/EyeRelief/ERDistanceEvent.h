@interface ERDistanceEvent : NSObject

@property (nonatomic) float distance;
@property (nonatomic) long long distanceCategory;
@property (nonatomic) BOOL didDetectAttention;

- (id)description;
- (id)initWithDistance:(float)a0 distanceCategory:(long long)a1 andAttention:(BOOL)a2;

@end
