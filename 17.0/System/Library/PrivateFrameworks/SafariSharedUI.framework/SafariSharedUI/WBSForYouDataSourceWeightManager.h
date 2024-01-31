@protocol WBSDictionaryKeyValueStore;

@interface WBSForYouDataSourceWeightManager : NSObject {
    id<WBSDictionaryKeyValueStore> _store;
}

- (void)clear;
- (id)initWithKeyValueStore:(id)a0;
- (void).cxx_destruct;
- (double)weightForSource:(unsigned long long)a0;
- (void)downvoteSource:(unsigned long long)a0;

@end
