@class NSString, SVXSystemEvent, NSArray, SVXStoreDemo, SVXDeviceSetupFlowScene, SVXSpeechSynthesisRequest;

@interface _SVXSystemEventMutation : NSObject <SVXSystemEventMutating> {
    SVXSystemEvent *_baseModel;
    long long _type;
    unsigned long long _timestamp;
    SVXDeviceSetupFlowScene *_deviceSetupFlowScene;
    SVXStoreDemo *_storeDemo;
    NSArray *_orderedAlarmAndTimerIDs;
    SVXSpeechSynthesisRequest *_speechSynthesisRequest;
    unsigned int _audioSessionID;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasType : 1; unsigned char hasTimestamp : 1; unsigned char hasDeviceSetupFlowScene : 1; unsigned char hasStoreDemo : 1; unsigned char hasOrderedAlarmAndTimerIDs : 1; unsigned char hasSpeechSynthesisRequest : 1; unsigned char hasAudioSessionID : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setType:(long long)a0;
- (id)init;
- (void)setAudioSessionID:(unsigned int)a0;
- (id)generate;
- (void)setTimestamp:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)setSpeechSynthesisRequest:(id)a0;
- (id)initWithBaseModel:(id)a0;
- (void)setDeviceSetupFlowScene:(id)a0;
- (void)setOrderedAlarmAndTimerIDs:(id)a0;
- (void)setStoreDemo:(id)a0;

@end
