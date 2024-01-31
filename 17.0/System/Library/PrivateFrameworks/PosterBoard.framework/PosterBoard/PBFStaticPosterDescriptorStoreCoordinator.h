@interface PBFStaticPosterDescriptorStoreCoordinator : PBFPosterDescriptorStoreCoordinator

+ (long long)type;
+ (BOOL)shouldBeExcludedFromBackup;

- (id)_accessQueue_buildIdentityForVersion:(unsigned long long)a0 supplement:(unsigned long long)a1;

@end
