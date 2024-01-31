@interface UserNotificationsCore.SyncService : NSObject {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ inboundMessaging;
    void /* unknown type, empty encoding */ outboundMessaging;
    void /* unknown type, empty encoding */ service;
    void /* unknown type, empty encoding */ flushInterval;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ queue_pendingDismissalPayloads;
    void /* unknown type, empty encoding */ queue_pendingDismissalIDs;
    void /* unknown type, empty encoding */ queue_pendingFeeds;
    void /* unknown type, empty encoding */ queue_pendingSectionID;
    void /* unknown type, empty encoding */ queue_pendingUniversalSectionID;
    void /* unknown type, empty encoding */ queue_flushTimer;
}

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
