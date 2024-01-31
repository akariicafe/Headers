@class NSString;

@interface AMSFeatureFlagITFE : NSObject

@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic, getter=isReadonly) BOOL readonly;
@property (copy, nonatomic) NSString *value;

+ (void)setMutableFeatureName:(id)a0 toValue:(id)a1;
+ (void)resetFeatures;
+ (id)_remoteGroupITFEs;
+ (id)fetchCustomFeatures;
+ (id)_customITFEs;
+ (BOOL)_isITFEValueCustom:(id)a0;
+ (void)removeOrphanITFEValues:(id)a0;
+ (id)fetchProfileFeatures;
+ (void)verifyOrphansForGroups:(id)a0;
+ (id)_mutableITFEs;
+ (id)_profileITFEs;
+ (id)_flagGroupITFEs;
+ (id)fetchMutableFeatures;
+ (id)_concreteITFEs;
+ (void)verifyOrphans;

- (unsigned long long)hash;
- (void)toggle:(BOOL)a0;
- (id)initWithValue:(id)a0 isEnabled:(BOOL)a1 isMutable:(BOOL)a2;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
