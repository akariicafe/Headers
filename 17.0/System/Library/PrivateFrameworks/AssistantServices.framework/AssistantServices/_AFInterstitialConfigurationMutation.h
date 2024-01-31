@class NSString, AFInterstitialConfiguration;

@interface _AFInterstitialConfigurationMutation : NSObject <AFInterstitialConfigurationMutating> {
    AFInterstitialConfiguration *_base;
    long long _style;
    NSString *_languageCode;
    long long _gender;
    NSString *_recordRoute;
    BOOL _isVoiceTrigger;
    BOOL _isDucking;
    BOOL _isTwoShot;
    unsigned long long _speechEndHostTime;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasStyle : 1; unsigned char hasLanguageCode : 1; unsigned char hasGender : 1; unsigned char hasRecordRoute : 1; unsigned char hasIsVoiceTrigger : 1; unsigned char hasIsDucking : 1; unsigned char hasIsTwoShot : 1; unsigned char hasSpeechEndHostTime : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBase:(id)a0;
- (BOOL)isDirty;
- (void)setLanguageCode:(id)a0;
- (id)getLanguageCode;
- (void)setStyle:(long long)a0;
- (void).cxx_destruct;
- (void)setGender:(long long)a0;
- (void)setRecordRoute:(id)a0;
- (long long)getGender;
- (BOOL)getIsDucking;
- (BOOL)getIsTwoShot;
- (BOOL)getIsVoiceTrigger;
- (id)getRecordRoute;
- (unsigned long long)getSpeechEndHostTime;
- (long long)getStyle;
- (void)setIsDucking:(BOOL)a0;
- (void)setIsTwoShot:(BOOL)a0;
- (void)setIsVoiceTrigger:(BOOL)a0;
- (void)setSpeechEndHostTime:(unsigned long long)a0;

@end
