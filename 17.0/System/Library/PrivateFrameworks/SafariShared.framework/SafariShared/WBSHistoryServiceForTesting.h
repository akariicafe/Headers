@class NSXPCListener;

@interface WBSHistoryServiceForTesting : WBSHistoryService {
    NSXPCListener *_listener;
}

- (id)init;
- (void).cxx_destruct;
- (id)_createListener;
- (id)connectWithClass:(Class)a0;

@end
