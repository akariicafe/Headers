@class NSString, NSUUID, CSCoreSpeechServicesAccessoryInfo, NSNumber;

@interface CSVoiceTriggerRTModelRequestOptionsMutable : NSObject <CSVoiceTriggerRTModelRequestOptionsMutablity>

@property (nonatomic) BOOL mAllowMph;
@property (retain, nonatomic) NSNumber *mUserSelectedPhrasetype;
@property (retain, nonatomic) NSString *mFallbackPhraseType;
@property (readonly, nonatomic) NSUUID *mEndpointId;
@property (readonly, nonatomic) NSNumber *mEngineMajorVersion;
@property (readonly, nonatomic) NSNumber *mEngineMinorVersion;
@property (readonly, nonatomic) NSNumber *mAccessoryModelType;
@property (retain, nonatomic) NSString *mSiriLocale;
@property (retain, nonatomic) CSCoreSpeechServicesAccessoryInfo *mAccessoryInfo;

- (void)setEndpointId:(id)a0;
- (void).cxx_destruct;
- (void)setSiriLocale:(id)a0;
- (void)setAccessoryModelType:(id)a0;
- (void)setAllowMph:(BOOL)a0;
- (void)setCSCoreSpeechServicesAccessoryInfo:(id)a0;
- (void)setEngineMajorVersion:(id)a0;
- (void)setEngineMinorVersion:(id)a0;
- (void)setUserSelectedPhraseType:(id)a0;

@end
