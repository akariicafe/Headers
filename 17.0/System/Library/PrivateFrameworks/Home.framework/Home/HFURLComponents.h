@class HFHomeKitDispatcher, NSISO8601DateFormatter, NAFuture, NSURL, NSURLComponents;

@interface HFURLComponents : NSObject

@property (class, readonly, copy, nonatomic) NSURL *personalRequestsOptInURL;
@property (class, readonly, copy, nonatomic) NSURL *recognizeMyVoiceOptInURL;
@property (class, readonly, copy, nonatomic) NSURL *aboutResidentDeviceURL;
@property (class, readonly, copy, nonatomic) NSURL *siriPrivacyURL;
@property (class, readonly, copy, nonatomic) NSURL *musicPrivacyURL;
@property (class, readonly, copy, nonatomic) NSURL *locationPrivacyURL;
@property (class, readonly, copy, nonatomic) NSURL *musicLoginURL;
@property (class, readonly, copy, nonatomic) NSURLComponents *dropInURLComponents;
@property (class, readonly, copy, nonatomic) NSURL *aboutImproveSiriAndDictationURL;

@property (readonly, nonatomic) HFHomeKitDispatcher *homeKitDispatcher;
@property (retain, nonatomic) NSISO8601DateFormatter *isoDateFormatter;
@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) unsigned long long destination;
@property (readonly, nonatomic) unsigned long long secondaryDestination;
@property (readonly, nonatomic) NAFuture *homeKitObjectFuture;

+ (id)roomURLForRoom:(id)a0;
+ (id)networkRouterSettingsURLForHome:(id)a0;
+ (id)_settingsURLHostString:(id)a0 forHome:(id)a1;
+ (id)_URLComponentsForDestination:(unsigned long long)a0;
+ (id)_privateSettingsURLHostString:(id)a0 UUID:(id)a1 forHome:(id)a2;
+ (id)_settingsURLHostString:(id)a0 UUID:(id)a1 forHome:(id)a2;
+ (id)_settingsURLHostString:(id)a0 scheme:(id)a1 UUID:(id)a2 forHome:(id)a3;
+ (id)accessoryDetailsURLForAccessory:(id)a0 home:(id)a1;
+ (id)bridgeSettingsURLForAccessory:(id)a0 home:(id)a1;
+ (id)cameraProfileDetailsURLForCameraProfile:(id)a0 home:(id)a1;
+ (id)connectedServicesURLForAccessory:(id)a0 home:(id)a1;
+ (id)faceRecognitionSettingsURLForHome:(id)a0;
+ (id)fixSymptomURLForAccessory:(id)a0 symptom:(id)a1;
+ (id)fixSymptomURLForAccessoryWithUUID:(id)a0 symptom:(id)a1;
+ (id)homeKitObjectURLForDestination:(unsigned long long)a0 secondaryDestination:(unsigned long long)a1 UUID:(id)a2;
+ (id)homeKitObjectURLForDestination:(unsigned long long)a0 secondaryDestination:(unsigned long long)a1 UUID:(id)a2 queryItems:(id)a3;
+ (BOOL)isHomeAppURL:(id)a0;
+ (id)locksOnboardingURLForHome:(id)a0;
+ (id)personalRequestsOptInURLForHomeID:(id)a0;
+ (id)serviceDetailsURLForService:(id)a0 home:(id)a1;
+ (id)symptomFromURL:(id)a0 accessory:(id)a1;
+ (id)userLockSettingsURLForHome:(id)a0;

- (id)initWithURL:(id)a0;
- (unsigned long long)destination;
- (id)description;
- (void).cxx_destruct;
- (id)valueForParameter:(id)a0;
- (id)_homeKitIdentifier;
- (id)dateForParameter:(id)a0;
- (id)homeKitObjectFuture;
- (id)initWithURL:(id)a0 homeKitDispatcher:(id)a1;

@end
