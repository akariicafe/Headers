@class UNUserNotificationCenter, NSMutableDictionary, NSDictionary, NSString, PLXPCResponderOperatorComposition, PowerUISmartChargeClient;

@interface PLBatteryUINotificationService : PLService <UNUserNotificationCenterDelegate>

@property (retain) UNUserNotificationCenter *userNotificationCenter;
@property (retain) NSMutableDictionary *queryPayload;
@property (retain, nonatomic) NSDictionary *queryResponderService;
@property (retain) NSString *tlcNotificationIdentifier;
@property BOOL tlcNotificationDelivered;
@property (retain) PLXPCResponderOperatorComposition *queryResponder;
@property (retain) PowerUISmartChargeClient *smartChargingClient;
@property BOOL isOBCEngaged;
@property (retain) PLBatteryUINotificationService *notificationService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)load;

- (void)initOperatorDependancies;
- (void).cxx_destruct;
- (void)removeTLCNotification;
- (void)surfaceNotification;
- (id)thermallyLimitedChargingEngagedContent;
- (id)thermallyLimitedChargingEngagedRequest;

@end
