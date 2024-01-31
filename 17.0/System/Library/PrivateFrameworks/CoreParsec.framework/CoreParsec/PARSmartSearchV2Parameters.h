@interface PARSmartSearchV2Parameters : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL enabled;
@property (readonly, nonatomic) BOOL enableCount;
@property (readonly, nonatomic) double paramA;
@property (readonly, nonatomic) double paramB;
@property (readonly, nonatomic) double paramC;
@property (readonly, nonatomic) double paramK;
@property (readonly, nonatomic) double paramM;
@property (readonly, nonatomic) double paramQ;
@property (readonly, nonatomic) double paramV;
@property (readonly, nonatomic) double windowBucket;
@property (readonly, nonatomic) long long minCount;
@property (readonly, nonatomic) long long zkwMinCount;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initFromEnabled:(BOOL)a0 enableCount:(BOOL)a1 minCount:(long long)a2 zkwMinCount:(long long)a3;
- (id)initFromEnabled:(BOOL)a0 enableCount:(BOOL)a1 minCount:(long long)a2;
- (id)initFromBag:(id)a0;
- (id)initWithCoder:(id)a0;

@end
