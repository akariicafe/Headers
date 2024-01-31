@class FCCDateProvider;

@interface FCCNotificationSuppressionStore : NSObject {
    FCCDateProvider *_dateProvider;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _unfairLock;
}

- (id)init;
- (void)setLastNotifiedSuppressionState:(BOOL)a0;
- (BOOL)notificationsSuppressed;
- (id)_userDefaults;
- (void)addNotificationSuppressionRequest:(id)a0;
- (void)removeNotificationSuppressionRequest:(id)a0;
- (void).cxx_destruct;
- (id)_requestsMap;
- (id)initWithDateProvider:(id)a0;
- (BOOL)lastNotifiedSuppressionState;
- (id)allRequests;
- (void)_updateStoredRequests:(id)a0;

@end
