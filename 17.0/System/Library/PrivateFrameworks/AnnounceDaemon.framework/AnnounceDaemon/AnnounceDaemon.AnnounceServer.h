@interface AnnounceDaemon.AnnounceServer : NSObject {
    void /* unknown type, empty encoding */ announceServiceListener;
    void /* unknown type, empty encoding */ playbackSessionServiceListener;
    void /* unknown type, empty encoding */ announceReachabilityServiceListener;
    void /* unknown type, empty encoding */ systemNotificationObserver;
    void /* unknown type, empty encoding */ tonePlayerServiceListener;
}

- (id)init;
- (void).cxx_destruct;

@end
