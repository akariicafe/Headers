@class CTStewieStateMonitor, CoreTelephonyClient, NSString;

@interface IMChorosMonitor : NSObject <CTStewieStateMonitorDelegate>

@property (retain, nonatomic) CTStewieStateMonitor *coreTelephonyStewieMonitor;
@property (retain, nonatomic) CoreTelephonyClient *telephonyClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (long long)serviceFromChatIdentifier:(id)a0;
+ (id)chatIdentifierForRoadside:(long long)a0;
+ (id)roadsideProviderIDFromChatIdentifier:(id)a0;

- (id)init;
- (id)getState;
- (BOOL)isStewieActive;
- (void)stateChanged:(id)a0;
- (void).cxx_destruct;
- (id)roadsideProviderForProviderId:(long long)a0;
- (BOOL)isStewieEmergencyActive;
- (BOOL)isStewieRoadsideActive;
- (long long)mostRecentlyUsedConversationForEmergency;
- (long long)mostRecentlyUsedConversationForRoadside;
- (id)mostRecentlyUsedRoadsideChatIdentifier;
- (void)openStewieAppWithCompletion:(id /* block */)a0 chatIdentifier:(id)a1;
- (void)placeEmergencyCallWithCompletion:(id /* block */)a0;
- (id)roadsideProviderNameForChatIdentifier:(id)a0;
- (BOOL)shouldShowTextEmergencyServicesButton;
- (BOOL)shouldShowTextRoadsideProviderButton;
- (BOOL)_activeServicesHasEmergency:(id)a0;
- (id)roadsideBusinessIDForChatIdentifier:(id)a0;
- (id)roadsideBusinessIDForProviderId:(long long)a0;
- (id)roadsideProviderNameForProviderId:(long long)a0;

@end
