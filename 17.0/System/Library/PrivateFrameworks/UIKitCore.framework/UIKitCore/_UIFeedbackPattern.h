@class NSTimer, NSMutableArray, NSString;

@interface _UIFeedbackPattern : _UIFeedback <_UIFeedbackDiscretePlayable, _UIFeedbackContinuousPlayable> {
    BOOL _canReuseCoreHapticsPlayer;
}

@property (retain, nonatomic) NSMutableArray *feedbacks;
@property (readonly, nonatomic) BOOL isRepeating;
@property (retain, nonatomic) NSTimer *repeatTimer;
@property (readonly, nonatomic, getter=isHighPriority) BOOL highPriority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double duration;
@property (readonly, nonatomic, getter=isPlaying) BOOL playing;

+ (BOOL)supportsSecureCoding;
+ (id)type;
+ (id)feedbackPattern;
+ (Class)_parametersClass;

- (void)play;
- (void)setPosition:(float)a0;
- (BOOL)canReuseCoreHapticsPlayer;
- (void)stop;
- (id)_playableProtocol;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)dictionaryRepresentation;
- (id)_debugDictionary;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)_effectivePlayableFeedbackTypes;
- (id)_allEventTypes;
- (id)_allSystemSoundIDs;
- (id)_individualFeedbacks;
- (void)_playPattern;
- (void)addFeedback:(id)a0 atTime:(double)a1;
- (void)setCanReuseCoreHapticsPlayer:(BOOL)a0;

@end
