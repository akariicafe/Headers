@class NSDictionary, BBBulletin, UNNotification;

@interface SiriDirectActionContext : SiriContext

@property (readonly, nonatomic) NSDictionary *payload;
@property (readonly, nonatomic) BBBulletin *bulletin;
@property (readonly, nonatomic) UNNotification *notification;

+ (BOOL)supportsSecureCoding;
+ (id)messageComposeNewThreadDirectActionWithAppBundleId:(id)a0 fullName:(id)a1 phoneOrEmailAddress:(id)a2;
+ (id)messageReadDirectActionWithAppBundleId:(id)a0 conversationGUID:(id)a1;
+ (id)messageReplyDirectActionWithAppBundleId:(id)a0 conversationGUID:(id)a1;
+ (id)appLaunchDirectActionWithAppBundleId:(id)a0;
+ (id)mapSearchDirectActionWithAppBundleId:(id)a0;
+ (id)mapShareEtaDirectActionWithAppBundleId:(id)a0;
+ (id)messageAmbiguousDirectActionWithAppBundleId:(id)a0;
+ (id)messageComposeDirectActionWithAppBundleId:(id)a0;
+ (id)musicSearchDirectActionWithAppBundleId:(id)a0;
+ (id)phoneAmbiguousDirectActionWithAppBundleId:(id)a0;
+ (id)phoneCallDirectActionWithAppBundleId:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)bundleId;
- (id)initWithPayload:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithUNNotification:(id)a0;
- (long long)directActionEvent;
- (id)initWithBBBulletin:(id)a0;
- (long long)_directActionEventFromAppIdsAndIntentIdentifiersOfBulletin:(id)a0 notification:(id)a1;
- (long long)_directActionEventFromContentTypesOfBulletin:(id)a0 notification:(id)a1;
- (id)_initWithDirectActionEvent:(long long)a0 appBundleId:(id)a1 conversationGUID:(id)a2 fullName:(id)a3 phoneOrEmailAddress:(id)a4;
- (id)_intentIdentifiersFromBulletin:(id)a0 notification:(id)a1;

@end
