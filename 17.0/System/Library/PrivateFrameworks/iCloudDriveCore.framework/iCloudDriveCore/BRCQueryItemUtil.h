@interface BRCQueryItemUtil : NSObject {
    BOOL _isMacOS;
}

+ (id)sharedQueryItemUtil;

- (long long)contentPolicyForRootContainerWithOptimizeStorage:(BOOL)a0 isDataSeparated:(BOOL)a1;
- (long long)contentPolicyForZoneRoot:(BOOL)a0 isAppInstalled:(BOOL)a1 isWallet:(BOOL)a2 isGreedyDocument:(BOOL)a3;
- (id)initWithMacOS:(BOOL)a0;

@end
