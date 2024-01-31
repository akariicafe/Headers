@class BBSettingsGateway, NSString, DNDGlobalConfigurationService, NSArray, NSDateComponents;
@protocol PBBGatewayManagerDelegate;

@interface PBBGatewayManager : NSObject <DNDGlobalConfigurationServiceListener>

@property (nonatomic) unsigned long long repeatedCallsEnabled;
@property (retain, nonatomic) DNDGlobalConfigurationService *globalConfigurationService;
@property (retain, nonatomic) BBSettingsGateway *settingsGateway;
@property (weak, nonatomic) id<PBBGatewayManagerDelegate> delegate;
@property (readonly, nonatomic) NSString *allowedGroupName;
@property (readonly, nonatomic) unsigned long long doNotDisturbPrivilegedSenderType;
@property (readonly, nonatomic) NSString *doNotDisturbPrivilegedSenderTypeGroupIdentifier;
@property (readonly, nonatomic) BOOL isScheduled;
@property (readonly, nonatomic) NSDateComponents *dndFromComponents;
@property (readonly, nonatomic) NSDateComponents *dndToComponents;
@property (retain, nonatomic) NSArray *bbSections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;
+ (id)dateComponentsFromDNDScheduleTime:(id)a0;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)setPairSyncEnabled:(BOOL)a0;
- (void)globalConfigurationService:(id)a0 didReceiveUpdatedPairSyncState:(unsigned long long)a1;
- (BOOL)pairSyncEnabled;
- (void)loadBBSections;
- (void)loadDNDState;
- (BOOL)pairSyncStateEditable;
- (BOOL)repeatedCalls;

@end
