@class CPDistributedMessagingCenter;

@interface AFContextManager : NSObject {
    struct __CFArray { } *_contextProviders;
    CPDistributedMessagingCenter *_center;
}

+ (id)defaultContextManager;

- (void)_shutdownServer;
- (id)init;
- (void)dealloc;
- (void)_startListening;
- (void)_collateContextsIntoArray:(id)a0;
- (id)_collateContexts;
- (void)_stopListening;
- (void).cxx_destruct;
- (void)removeContextProvider:(id)a0;
- (void)nothing;
- (void)startCenter:(id)a0;
- (BOOL)addContextProvider:(id)a0;
- (id)_serverName;

@end
