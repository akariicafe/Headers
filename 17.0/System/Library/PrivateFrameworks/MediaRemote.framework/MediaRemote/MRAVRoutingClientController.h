@class NSMutableDictionary, MRMediaRemoteService, NSObject;
@protocol OS_dispatch_queue;

@interface MRAVRoutingClientController : NSObject {
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableDictionary *_pendingCompletionHandlersForCategories;
    NSMutableDictionary *_cachedRoutesForCategories;
}

@property (readonly, nonatomic) MRMediaRemoteService *mediaRemoteService;

- (id)init;
- (void)dealloc;
- (void)fetchPickableRoutesForCategory:(id)a0 completion:(id /* block */)a1;
- (void)_pickableRoutesDidChangeNotification:(id)a0;
- (id)initWithMediaRemoteService:(id)a0;
- (void).cxx_destruct;

@end
