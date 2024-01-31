@interface _DKCompatibility : NSObject

@property (nonatomic) long long min;
@property (nonatomic) long long max;

+ (id)compatibilityFromSerializedCompatibility:(id)a0;
+ (id)compatibilityWithMinVersion:(long long)a0 maxVersion:(long long)a1;
+ (id)currentCompatibility;

- (id)eventPredicate;
- (unsigned long long)hash;
- (id)serialize;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)filterIncompatibleEvents:(id)a0;

@end
