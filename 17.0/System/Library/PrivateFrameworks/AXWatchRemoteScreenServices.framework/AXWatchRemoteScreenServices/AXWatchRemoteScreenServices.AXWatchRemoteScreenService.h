@class _TtC27AXWatchRemoteScreenServices26AXWatchRemoteScreenService;

@interface AXWatchRemoteScreenServices.AXWatchRemoteScreenService : NSObject <AXWatchRemoteScreenServiceProtocolObjc> {
    void /* unknown type, empty encoding */ serviceImpl;
    void /* unknown type, empty encoding */ twiceEnabledEvent;
    void /* unknown type, empty encoding */ twiceEnabledKey;
}

@property (class, nonatomic, readonly) _TtC27AXWatchRemoteScreenServices26AXWatchRemoteScreenService *sharedInstance;

- (BOOL)npsSetTwiceEnabled:(BOOL)a0;
- (BOOL)startTwiceRemoteScreen;
- (BOOL)stopTwiceRemoteScreen;
- (id)init;
- (void).cxx_destruct;

@end
