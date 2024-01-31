@class SMTTCUPackage, NSString, SMTSiriIntendedInfo, NSArray, AFSpeechPackage;

@interface _SMTTCUPackageMutation : NSObject <SMTTCUPackageMutating> {
    SMTTCUPackage *_base;
    NSString *_tcuId;
    NSString *_requestId;
    long long _tcuState;
    long long _speechEvent;
    long long _voiceTriggerPhraseType;
    SMTSiriIntendedInfo *_siriIntendedInfo;
    NSArray *_prevTCUIds;
    double _startAudioTimeStampInMs;
    double _endAudioTimeStampInMs;
    AFSpeechPackage *_speechPackage;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasTcuId : 1; unsigned char hasRequestId : 1; unsigned char hasTcuState : 1; unsigned char hasSpeechEvent : 1; unsigned char hasVoiceTriggerPhraseType : 1; unsigned char hasSiriIntendedInfo : 1; unsigned char hasPrevTCUIds : 1; unsigned char hasStartAudioTimeStampInMs : 1; unsigned char hasEndAudioTimeStampInMs : 1; unsigned char hasSpeechPackage : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBase:(id)a0;
- (BOOL)isDirty;
- (void).cxx_destruct;
- (void)setRequestId:(id)a0;
- (void)setTcuId:(id)a0;
- (void)setSpeechEvent:(long long)a0;
- (void)setSpeechPackage:(id)a0;
- (double)getEndAudioTimeStampInMs;
- (id)getPrevTCUIds;
- (id)getRequestId;
- (id)getSiriIntendedInfo;
- (long long)getSpeechEvent;
- (id)getSpeechPackage;
- (double)getStartAudioTimeStampInMs;
- (id)getTcuId;
- (long long)getTcuState;
- (long long)getVoiceTriggerPhraseType;
- (void)setEndAudioTimeStampInMs:(double)a0;
- (void)setPrevTCUIds:(id)a0;
- (void)setSiriIntendedInfo:(id)a0;
- (void)setStartAudioTimeStampInMs:(double)a0;
- (void)setTcuState:(long long)a0;
- (void)setVoiceTriggerPhraseType:(long long)a0;

@end
