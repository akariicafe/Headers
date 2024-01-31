@class NSString, NSMutableDictionary;

@interface HFCameraAnalyticsPayloadDecorator : NSObject <HFHomeManagerObserver>

@property (retain, nonatomic) NSMutableDictionary *additionalPayload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedDecorator;

- (id)init;
- (void).cxx_destruct;
- (void)homeKitDispatcher:(id)a0 manager:(id)a1 didChangeHome:(id)a2;
- (void)homeManagerDidFinishInitialDatabaseLoad:(id)a0;
- (void)_initialiseAdditionalPayload;
- (void)_initialiseAdditionalPayloadForNewHome;
- (void)_updateHomeInformation:(id)a0;
- (id)decoratePayload:(id)a0;

@end
