@class SSRVoiceProfileManager;

@interface SRSVoiceProfileManager : NSObject {
    SSRVoiceProfileManager *_voiceProfileManager;
}

- (id)init;
- (void)markSATEnrollmentSuccessForVoiceProfile:(id)a0;
- (void).cxx_destruct;
- (void)deleteUserVoiceProfile:(id)a0;
- (BOOL)hasVoiceProfileIniCloudForLanguageCode:(id)a0 backupMetaBlob:(id)a1;
- (BOOL)isSATEnrolledForSiriProfileId:(id)a0 languageCode:(id)a1;

@end
