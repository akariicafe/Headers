@class NSAttributedString, NSString, _TtC12TextToSpeech10TaggedSSML, NSMutableArray;

@interface TTSSpeechAction : NSObject

@property (retain, nonatomic) NSString *processedString;
@property (retain, nonatomic) _TtC12TextToSpeech10TaggedSSML *taggedSSML;
@property (nonatomic) unsigned long long currentSSMLSnippetIndex;
@property (retain, nonatomic) NSMutableArray *emojiRangeReplacements;
@property (nonatomic) BOOL shouldQueue;
@property (nonatomic) BOOL cannotInterrupt;
@property (nonatomic) BOOL shouldDetectLanguage;
@property (nonatomic) BOOL shouldProcessEmoji;
@property (nonatomic) BOOL shouldProcessEmoticons;
@property (nonatomic) BOOL shouldPrecomposeString;
@property (nonatomic) BOOL ignoreCustomSubstitutions;
@property (nonatomic) BOOL synthesizeSilently;
@property (retain, nonatomic) NSString *language;
@property (retain, nonatomic) NSString *voiceIdentifier;
@property (nonatomic) long long state;
@property (copy, nonatomic) id /* block */ audioBufferCallback;
@property (copy, nonatomic) id /* block */ markerCallback;
@property (copy, nonatomic) NSString *string;
@property (copy, nonatomic) NSAttributedString *attributedString;
@property (copy, nonatomic) NSString *ssmlRepresentation;
@property (copy, nonatomic) id /* block */ completionCallback;
@property (copy, nonatomic) id /* block */ onPauseCallback;
@property (copy, nonatomic) id /* block */ onResumeCallback;
@property (copy, nonatomic) id /* block */ onWillSpeakRangeCallback;
@property (copy, nonatomic) id /* block */ onMarkerCallback;
@property (copy, nonatomic) id /* block */ onSpeechStartCallback;
@property (nonatomic) double speakingRate;
@property (nonatomic) double pitch;
@property (nonatomic) double volume;
@property (nonatomic) long long wordCallbackPostProcessedOffset;
@property (retain, nonatomic) NSString *finalSpokenString;

+ (id)actionWithAttributedString:(id)a0 shouldQueue:(BOOL)a1;
+ (id)actionWithSSMLRepresentation:(id)a0 shouldQueue:(BOOL)a1;
+ (id)actionWithString:(id)a0 shouldQueue:(BOOL)a1;
+ (void)test_setUseMaxSpeechRate:(BOOL)a0;

- (id)init;
- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)utterance;
- (void)setUtterance:(id)a0;
- (id)_detectLanguageFromContent;
- (void)preprocessAction;

@end
