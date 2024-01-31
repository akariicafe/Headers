@interface PKPayLaterCardMagnitudes : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long unknownCount;
@property (nonatomic) unsigned long long foodAndDrinksCount;
@property (nonatomic) unsigned long long shoppingCount;
@property (nonatomic) unsigned long long travelCount;
@property (nonatomic) unsigned long long servicesCount;
@property (nonatomic) unsigned long long funCount;
@property (nonatomic) unsigned long long healthCount;
@property (nonatomic) unsigned long long transportcount;

+ (id)randomMagnitude;
+ (id)emptyMangitudes;
+ (id)fullMagnitude;
+ (id)magnitudesFromFinancingPlans:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMaximumCount:(unsigned long long)a0;
- (id)initWithUnknownCount:(unsigned long long)a0 foodAndDrinksCount:(unsigned long long)a1 shoppingCount:(unsigned long long)a2 travelCount:(unsigned long long)a3 servicesCount:(unsigned long long)a4 funCount:(unsigned long long)a5 healthCount:(unsigned long long)a6 transportCount:(unsigned long long)a7;

@end
