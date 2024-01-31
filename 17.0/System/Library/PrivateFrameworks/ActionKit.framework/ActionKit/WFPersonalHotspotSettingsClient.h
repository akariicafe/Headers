@class NSString;

@interface WFPersonalHotspotSettingsClient : WFSettingsClient <WFBooleanStateSetting>

@property (nonatomic) struct NETRBClient { } *client;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)createClientWithCompletionHandler:(id /* block */)a0;

@end
