@interface SNNComputeUnit : NSObject

@property (readonly, nonatomic) int platform;
@property (readonly, nonatomic) unsigned long long bitmask;
@property (readonly, nonatomic) long long kind;
@property (readonly, nonatomic) long long order;

+ (unsigned long long)bitmakForComputeUnits:(id)a0;

- (id)initWithComputeUnitKind:(long long)a0;

@end
