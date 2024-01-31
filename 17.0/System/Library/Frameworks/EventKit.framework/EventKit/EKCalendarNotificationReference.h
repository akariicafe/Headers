@class EKCalendarNotification, EKEventStore, NSDate, EKObjectID;

@interface EKCalendarNotificationReference : NSObject {
    NSDate *_date;
    EKCalendarNotification *_notification;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) EKCalendarNotification *notification;
@property (readonly, nonatomic) EKObjectID *objectID;
@property (readonly, nonatomic) EKEventStore *eventStore;

- (id)description;
- (void).cxx_destruct;
- (id)_notification;
- (long long)_notificationTypeForResourceChange:(id)a0 notificationType:(int)a1;
- (id)initWithType:(int)a0 objectID:(id)a1 date:(id)a2 eventStore:(id)a3;
- (id)initWithType:(int)a0 objectID:(id)a1 eventStore:(id)a2;

@end
