@class SPZKWSession, NSObject;
@protocol OS_dispatch_queue;

@interface SPUISearchModelZKW : SPUISearchModel {
    NSObject<OS_dispatch_queue> *_queryProcessor;
    BOOL _shouldCacheResults;
    BOOL _newQuery;
}

@property (retain, nonatomic) SPZKWSession *session;
@property (nonatomic) BOOL ignoreNextPartialUpdate;

- (id)init;
- (void)dealloc;
- (void)_refreshRequested;
- (void)refreshWithQueryContext:(id)a0;
- (void)updateWithQueryContext:(id)a0;
- (void).cxx_destruct;
- (void)didReceiveResponse:(id)a0;
- (void)refreshUpdatingQueryId:(BOOL)a0 withQueryContext:(id)a1;

@end
