@class CMIndoorOutdoorManager, NSObject;
@protocol OS_dispatch_queue, CMIndoorOutdoorDelegate;

@interface CMIndoorOutdoorManagerInternal : NSObject {
    NSObject<OS_dispatch_queue> *_internalQueue;
    id<CMIndoorOutdoorDelegate> _delegate;
    CMIndoorOutdoorManager *_sender;
    void *_connection;
    BOOL _startedUpdates;
}

- (id)init;
- (void)dealloc;
- (void)_teardown;
- (void)_lastKnownIndoorOutdoorStateWithHandler:(id /* block */)a0;
- (void)_startIndoorOutdoorUpdates;
- (void)_stopIndoorOutdoorUpdates;

@end
