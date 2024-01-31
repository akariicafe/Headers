@class NSString, UNNotificationContent;

@interface FinanceKit.ManagedUserNotification : NSManagedObject

@property (nonatomic, retain) UNNotificationContent *content;
@property (nonatomic) BOOL requiresWallet;
@property (nonatomic, copy) NSString *orderIdentifier;
@property (nonatomic, copy) NSString *orderTypeIdentifier;
@property (nonatomic, copy) NSString *notificationIdentifier;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
