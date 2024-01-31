@class NSURL, NSString;

@interface PBFPosterDescriptorStoreCoordinator : PBFPosterModelStoreCoordinator {
    NSURL *_descriptorIdentifierURL;
    NSString *_descriptorIdentifier;
}

+ (long long)type;
+ (BOOL)shouldBeExcludedFromBackup;

- (void).cxx_destruct;
- (id)_accessQueue_buildIdentityForVersion:(unsigned long long)a0 supplement:(unsigned long long)a1;

@end
