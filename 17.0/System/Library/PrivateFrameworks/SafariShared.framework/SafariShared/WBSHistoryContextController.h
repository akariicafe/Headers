@class CKContextClient, WBSHistory, NSURL, CKContextResponse, NSObject;
@protocol OS_dispatch_queue;

@interface WBSHistoryContextController : NSObject {
    CKContextResponse *_cachedResponse;
    NSURL *_pageURLForCachedResponse;
    NSObject<OS_dispatch_queue> *_internalQueue;
    CKContextClient *_client;
}

@property (readonly, nonatomic) WBSHistory *history;

- (void).cxx_destruct;
- (void)_persistTopicsFromContextResult:(id)a0 forPageURL:(id)a1;
- (void)cachedResponseForURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)contextForPageURL:(id)a0 content:(id)a1 contentType:(long long)a2 metadata:(id)a3 isPrivate:(BOOL)a4 isReaderAvailable:(BOOL)a5 withCompletionHandler:(id /* block */)a6;
- (id)initWithHistory:(id)a0 contextClient:(id)a1;
- (id)initWithHistory:(id)a0 contextClient:(id)a1 qualityOfService:(unsigned int)a2;
- (void)invalidateCachedResults;

@end
