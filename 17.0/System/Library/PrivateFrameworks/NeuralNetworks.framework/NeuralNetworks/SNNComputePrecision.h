@interface SNNComputePrecision : NSObject

@property (readonly, nonatomic) int storageType;
@property (readonly, nonatomic) long long kind;

- (id)initWithComputePrecisionKind:(long long)a0;

@end
