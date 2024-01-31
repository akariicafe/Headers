@interface ATXRootOfAppData : NSObject

- (id)init;
- (id)initInternal;
- (unsigned long long)docFreqForBundleId:(id)a0 withAction:(id)a1;
- (void)recordDocFreqWithBundleId:(id)a0 hasAction:(id)a1;
- (void)recordSessionWithBundleId:(id)a0 firstAction:(id)a1;
- (unsigned long long)sessionCountForBundleId:(id)a0;
- (unsigned long long)sessionCountForBundleId:(id)a0 firstAction:(id)a1;

@end
