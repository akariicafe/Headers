@class NSArray;

@interface FCNotificationsConfiguration : NSObject

@property (readonly, copy, nonatomic) NSArray *preSubscribedNotificationsChannelIDs;
@property (readonly, copy, nonatomic) NSArray *recommendedNotificationChannelIDs;

- (unsigned long long)hash;
- (id)initWithPresubscribedChannelIDs:(id)a0 recommendedNotificationChannelIDs:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
