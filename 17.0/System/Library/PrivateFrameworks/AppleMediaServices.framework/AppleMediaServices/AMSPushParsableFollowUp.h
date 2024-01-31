@class NSString, AMSBagKeySet;

@interface AMSPushParsableFollowUp : NSObject <AMSPushParsable, AMSUserNotificationIntentDelegate, AMSBagConsumer>

@property (class, readonly, nonatomic) BOOL shouldSkipAccountCheck;
@property (class, readonly, nonatomic) NSString *bagSubProfile;
@property (class, readonly, nonatomic) NSString *bagSubProfileVersion;
@property (class, readonly, nonatomic) AMSBagKeySet *bagKeySet;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createBagForSubProfile;
+ (id)_createFollowUpItemFromPayload:(id)a0;
+ (id)_createFollowUpItemFromNotification:(id)a0;
+ (id)_createNotificationFromFollowUpItem:(id)a0;
+ (void)_performClearWithPayload:(id)a0;
+ (void)_performPostWithPayload:(id)a0 bag:(id)a1;
+ (BOOL)_shouldAllowFollowUp:(id)a0 bag:(id)a1;
+ (BOOL)_shouldClearFollowUpFromPayload:(id)a0;
+ (void)handleNotificationPayload:(id)a0 config:(id)a1 bag:(id)a2;
+ (BOOL)isDeviceOfferNotification:(id)a0;
+ (void)removeDeviceOfferWithPayload:(id)a0 logKey:(id)a1 bag:(id)a2;
+ (id)sharedISO8601DateFormatter;
+ (void)userNotification:(id)a0 selectedButtonAction:(id)a1 bag:(id)a2;


@end
