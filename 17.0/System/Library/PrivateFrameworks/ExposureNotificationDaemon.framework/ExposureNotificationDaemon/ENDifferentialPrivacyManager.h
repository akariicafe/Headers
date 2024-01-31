@class NSDictionary, _DPBitValueRecorder;

@interface ENDifferentialPrivacyManager : NSObject {
    _DPBitValueRecorder *_userRiskRecorder;
    _DPBitValueRecorder *_userRiskParametersRecorder;
    _DPBitValueRecorder *_userBeaconCountRecorder;
    _DPBitValueRecorder *_userNotificationRecorder;
    _DPBitValueRecorder *_userNotificationInteractionRecorder;
    _DPBitValueRecorder *_userCodeVerifiedRecorder;
    _DPBitValueRecorder *_userDiagnosedVaccineStatusRecorder;
    _DPBitValueRecorder *_userKeysUploadedRecorder;
    _DPBitValueRecorder *_userDateExposureRecorder;
    _DPBitValueRecorder *_userCodeVerifiedV2Recorder;
    _DPBitValueRecorder *_userKeysUploadedV2Recorder;
    _DPBitValueRecorder *_userSecondaryAttackV2Recorder;
    _DPBitValueRecorder *_userNotificationV2Recorder;
    _DPBitValueRecorder *_userDiagnosedVaccineStatusV2Recorder;
    _DPBitValueRecorder *_userDateExposureV2Recorder;
}

@property (readonly, copy, nonatomic) NSDictionary *metadata;

+ (id)hashForServerExposureConfiguration:(id)a0;
+ (unsigned short)userRiskScoreForExposureDetectionSummary:(id)a0;

- (void).cxx_destruct;
- (void)reportUserRiskScoreWithSummary:(id)a0;
- (void)_submitValue:(id)a0 toRecorder:(id)a1 description:(const char *)a2;
- (BOOL)_submitVectorValue:(id)a0 toRecorder:(id)a1 description:(const char *)a2;
- (id)initWithServerConfiguration:(id)a0 serverExposureConfiguration:(id)a1;
- (void)reportUserBeaconCount:(id)a0;
- (void)reportUserCodeVerified:(unsigned char)a0 reportType:(unsigned int)a1;
- (void)reportUserDiagnosedVaccineStatus:(id)a0;
- (void)reportUserExposureNotificationTapped:(BOOL)a0 classificationIndex:(unsigned char)a1;
- (void)reportUserExposureNotificationWithClassificationIndex:(unsigned char)a0 daysDelay:(unsigned char)a1;
- (void)reportUserKeysUploaded:(unsigned char)a0 reportType:(unsigned int)a1;
- (void)reportUserRiskParameters:(id)a0;
- (void)updatedServerConfiguration:(id)a0 serverExposureConfiguration:(id)a1;

@end
