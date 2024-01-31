@class TKTokenWatcher;

@interface TKTokenWatcherProxy : NSObject <TKProtocolTokenWatcherHost> {
    TKTokenWatcher *_watcher;
}

- (void).cxx_destruct;
- (id)initWithWatcher:(id)a0;
- (void)insertedToken:(id)a0;
- (void)removedToken:(id)a0;

@end
