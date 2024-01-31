@class NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface VTXPCServiceClient : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_vtxConnection;
}

- (id)init;
- (void)dealloc;
- (id)getFirstChanceAudioBuffer;
- (void)requestAudioCapture:(double)a0;
- (id)_service;
- (void)setPhraseSpotterBypassing:(BOOL)a0 timeout:(double)a1;
- (id)requestCurrentVoiceTriggerAssetDictionary;
- (void)resetAssertions;
- (unsigned char)getLastTriggerType;
- (void)notifyTriggerEventRequest;
- (long long)getVoiceTriggerCount;
- (void)requestCurrentVoiceTriggerAssetDictionaryWithReply:(id /* block */)a0;
- (void).cxx_destruct;
- (id)requestCurrentBuiltInRTModelDictionary;
- (void)enableVoiceTrigger:(BOOL)a0 withAssertion:(id)a1;
- (void)setCurrentBuiltInRTModelDictionary:(id)a0;
- (id)getFirstChanceVTEventInfo;
- (long long)isLastTriggerFollowedBySpeech;
- (void)notifySecondChanceRequest;
- (id)getFirstChanceTriggeredDate;
- (void)setRaiseToSpeakBypassing:(BOOL)a0 timeout:(double)a1;
- (void)clearVoiceTriggerCount;
- (void)notifyVoiceTriggeredSiriSessionCancelled:(id)a0;

@end
