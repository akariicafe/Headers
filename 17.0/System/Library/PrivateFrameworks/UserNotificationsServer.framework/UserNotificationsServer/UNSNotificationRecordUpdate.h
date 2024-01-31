@class UNSNotificationRecord;

@interface UNSNotificationRecordUpdate : NSObject

@property (readonly, nonatomic) UNSNotificationRecord *notificationRecord;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_initWithNotificationRecord:(id)a0;

@end
