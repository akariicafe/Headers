@class NSObject, CSSelfTriggerDetector, NSMutableArray, CSPolicy;
@protocol OS_dispatch_queue;

@interface CSSelfTriggerController : NSObject

@property (retain, nonatomic) CSPolicy *enabledPolicyWithAVVCAudioSource;
@property (retain, nonatomic) CSPolicy *enabledPolicyWithTapAudioSource;
@property (retain, nonatomic) CSSelfTriggerDetector *selfTriggerWithAVVCAudioSource;
@property (retain, nonatomic) CSSelfTriggerDetector *selfTriggerWithTapAudioSource;
@property (retain, nonatomic) NSMutableArray *enabledStates;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void)registerObserver:(id)a0;
- (void)start;
- (void)unregisterObserver:(id)a0;
- (void).cxx_destruct;
- (void)setAsset:(id)a0;
- (void)_handleEnabledPolicyEventForAudioSourceType:(unsigned long long)a0 enabled:(BOOL)a1;
- (void)_handleEnabledStatesUpdate:(id)a0;
- (id)initWithTargetQueue:(id)a0 audioTapProvider:(id)a1 avvcRefChannelAvailable:(BOOL)a2;

@end
