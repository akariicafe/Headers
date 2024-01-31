@class NSString, NSDictionary, NSArray;

@interface NPKUserNotification : NSObject <NPKUserNotificationModel>

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *body;
@property (readonly, nonatomic) NSString *notificationCategoryIdentifier;
@property (readonly, nonatomic) NSDictionary *userInfo;
@property (readonly, nonatomic) NSArray *identifierHashComponents;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL isSuppressed;
@property (readonly, nonatomic) BOOL wantsBadgedIcon;
@property (readonly, nonatomic, getter=isSuppressed) BOOL suppressed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)generateModelIdentifierWith:(id)a0;


@end
