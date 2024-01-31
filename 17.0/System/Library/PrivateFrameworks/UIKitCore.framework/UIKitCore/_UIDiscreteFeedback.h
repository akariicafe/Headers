@class NSString;

@interface _UIDiscreteFeedback : _UIFeedback <_UIFeedbackDiscretePlayable>

@property (nonatomic) long long type;
@property (readonly, nonatomic, getter=isHighPriority) BOOL highPriority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (id)type;
+ (id)discreteFeedbackForType:(long long)a0;

- (unsigned long long)_effectiveEventType;
- (id)_playableProtocol;
- (id)initWithDictionaryRepresentation:(id)a0;
- (BOOL)isPlaying;
- (id)dictionaryRepresentation;
- (id)_debugDictionary;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned int)_effectiveSystemSoundID;

@end
