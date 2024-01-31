@class NSString, FLFollowUpController, DEDNotifierConfiguration;

@interface DEDFollowUpNotifier : NSObject <DEDNotifier, DEDNotificationDelivering, DEDSecureArchiving, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak) DEDNotifierConfiguration *config;
@property (retain) NSString *bugSessionIdentifier;
@property (retain) FLFollowUpController *followUpController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)archivedClasses;
+ (void)forceRemoveNotificationWithIdentifier:(id)a0 hostIdentifier:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)identifier;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithConfiguration:(id)a0 session:(id)a1;
- (void)presentNotificationForSession:(id)a0;
- (void)removeNotificationForSession:(id)a0;

@end
