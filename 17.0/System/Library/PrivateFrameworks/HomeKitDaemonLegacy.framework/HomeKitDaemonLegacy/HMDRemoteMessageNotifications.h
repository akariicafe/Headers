@class NSMapTable;

@interface HMDRemoteMessageNotifications : HMFObject {
    struct hmf_unfair_data_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; } _lock;
}

@property (retain, nonatomic) NSMapTable *sessionNotificationPayloads;

+ (void)initialize;
+ (BOOL)messageExpectsNotificationResponse:(id)a0;
+ (id)messagesWithNotificationResponses;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)_notificationPayloadsForDevice:(id)a0;
- (void)addNotificationPayload:(id)a0 identifier:(id)a1 device:(id)a2;
- (void)clearNotificationsForDevice:(id)a0;
- (id)notificationPayloadWithIdentifier:(id)a0 device:(id)a1;
- (void)removeNotificationPayloadWithIdentifier:(id)a0 device:(id)a1;

@end
