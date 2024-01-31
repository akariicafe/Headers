@class NSString, HDProfile, HDHearingProfileExtension, NSObject, HDHealthStoreClient;
@protocol OS_dispatch_queue;

@interface HDHeadphoneAudioExposureControlServer : HDStandardTaskServer <HDDiagnosticObject, HKHeadphoneAudioExposureControlServer> {
    HDProfile *_profile;
    HDHearingProfileExtension *_profileExtension;
    HDHealthStoreClient *_client;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskIdentifier;

- (id)exportedInterface;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (id)remoteInterface;
- (id)diagnosticDescription;
- (void)connectionInvalidated;
- (void).cxx_destruct;
- (void)remote_fetchInfoWithCompletion:(id /* block */)a0;
- (void)remote_fetchDoseLimitWithCompletion:(id /* block */)a0;
- (void)remote_insertQuantityWithExposure:(double)a0 duration:(double)a1 startDate:(id)a2 includesNotificationSample:(BOOL)a3 synced:(BOOL)a4 completion:(id /* block */)a5;
- (void)remote_overrideDoseLimit:(id)a0 completion:(id /* block */)a1;
- (void)remote_rebuildWithCompletion:(id /* block */)a0;
- (id)_headphoneProvenanceForRemoteDevice:(BOOL)a0;
- (id)_headphoneProvenanceForRemoteWatch;
- (id)_makeAirPods;
- (id)_makeBeatsHeadphones;
- (id)_makeEarPods;
- (id)_makeUnknownHeadphones;

@end
