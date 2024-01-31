@class PHFetchOptions;

@interface PHQueryPersonContext : NSObject {
    PHFetchOptions *_fetchOptions;
}

+ (id)subpredicatesForFetchOptions:(id)a0;

- (id)_notHiddenTypePredicate;
- (id)personContextNonePredicates;
- (id)subpredicates;
- (id)personContextUnverifiedPredicate;
- (id)initWithFetchOptions:(id)a0;
- (id)personContextAdditionalPredicate;
- (id)personContextOneUpPredicate;
- (id)_faceCountPredicateWithMinimum:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)personContextPeopleHomePredicate;
- (id)_notVerifiedPredicate;
- (id)personContextDetailPredicate;
- (id)_verifiedVisiblePredicate;
- (id)_verifiedPredicate;

@end
