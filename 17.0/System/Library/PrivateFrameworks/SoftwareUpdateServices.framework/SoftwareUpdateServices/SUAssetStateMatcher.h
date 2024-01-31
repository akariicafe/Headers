@class NSString, NSDictionary;

@interface SUAssetStateMatcher : NSObject <SUAssetMatcher>

@property (readonly, nonatomic) NSString *assetType;
@property (readonly, nonatomic) int interestedStates;
@property (readonly, nonatomic) NSDictionary *matcherInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_findMatchFromCandidates:(id)a0 error:(id *)a1;
- (BOOL)_matchesFilterType:(id)a0;
- (void)_modifyMADownloadOptions:(id)a0;
- (id)findMatchFromCandidates:(id)a0 error:(id *)a1;
- (id)initWithType:(id)a0 interestedStates:(int)a1;
- (void)modifyMADownloadOptions:(id)a0;

@end
