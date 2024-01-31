@class NSData, NSString, NSArray, AFPowerContextPolicy, NSURL, NSUUID, NSDictionary, CLLocation;

@interface CESRSpeechParameters : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *language;
@property (readonly, copy, nonatomic) NSString *requestIdentifier;
@property (readonly, copy, nonatomic) NSString *dictationUIInteractionIdentifier;
@property (readonly, copy, nonatomic) NSString *task;
@property (readonly, copy, nonatomic) NSArray *loggingContext;
@property (readonly, copy, nonatomic) NSString *applicationName;
@property (readonly, copy, nonatomic) NSData *profile;
@property (readonly, copy, nonatomic) NSDictionary *overrides;
@property (readonly, copy, nonatomic) NSURL *modelOverrideURL;
@property (readonly, copy, nonatomic) NSURL *originalAudioFileURL;
@property (readonly, copy, nonatomic) NSString *codec;
@property (readonly, nonatomic) BOOL narrowband;
@property (readonly, nonatomic) BOOL detectUtterances;
@property (readonly, nonatomic) BOOL censorSpeech;
@property (readonly, nonatomic) BOOL farField;
@property (readonly, nonatomic) BOOL secureOfflineOnly;
@property (readonly, nonatomic) BOOL shouldStoreAudioOnDevice;
@property (readonly, nonatomic) BOOL continuousListening;
@property (readonly, nonatomic) BOOL shouldHandleCapitalization;
@property (readonly, nonatomic) BOOL isSpeechAPIRequest;
@property (readonly, nonatomic) double maximumRecognitionDuration;
@property (readonly, nonatomic) double endpointStart;
@property (readonly, copy, nonatomic) NSString *inputOrigin;
@property (readonly, copy, nonatomic) CLLocation *location;
@property (readonly, copy, nonatomic) NSArray *jitGrammar;
@property (readonly, nonatomic) BOOL deliverEagerPackage;
@property (readonly, nonatomic) BOOL disableDeliveringAsrFeatures;
@property (readonly, nonatomic) BOOL enableEmojiRecognition;
@property (readonly, nonatomic) BOOL enableAutoPunctuation;
@property (readonly, nonatomic) BOOL enableVoiceCommands;
@property (readonly, copy, nonatomic) NSArray *sharedUserInfos;
@property (readonly, copy, nonatomic) NSString *prefixText;
@property (readonly, copy, nonatomic) NSString *postfixText;
@property (readonly, copy, nonatomic) NSString *selectedText;
@property (readonly, copy, nonatomic) AFPowerContextPolicy *powerContext;
@property (readonly, nonatomic) double recognitionStart;
@property (readonly, nonatomic) BOOL shouldGenerateVoiceCommandCandidates;
@property (readonly, copy, nonatomic) NSUUID *asrId;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)_descriptionWithIndent:(unsigned long long)a0;
- (id)mutatedCopyWithMutator:(id /* block */)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithLanguage:(id)a0 requestIdentifier:(id)a1 dictationUIInteractionIdentifier:(id)a2 task:(id)a3 loggingContext:(id)a4 applicationName:(id)a5 profile:(id)a6 overrides:(id)a7 modelOverrideURL:(id)a8 originalAudioFileURL:(id)a9 codec:(id)a10 narrowband:(BOOL)a11 detectUtterances:(BOOL)a12 censorSpeech:(BOOL)a13 farField:(BOOL)a14 secureOfflineOnly:(BOOL)a15 shouldStoreAudioOnDevice:(BOOL)a16 continuousListening:(BOOL)a17 shouldHandleCapitalization:(BOOL)a18 isSpeechAPIRequest:(BOOL)a19 maximumRecognitionDuration:(double)a20 endpointStart:(double)a21 inputOrigin:(id)a22 location:(id)a23 jitGrammar:(id)a24 deliverEagerPackage:(BOOL)a25 disableDeliveringAsrFeatures:(BOOL)a26 enableEmojiRecognition:(BOOL)a27 enableAutoPunctuation:(BOOL)a28 enableVoiceCommands:(BOOL)a29;
- (id)initWithLanguage:(id)a0 requestIdentifier:(id)a1 dictationUIInteractionIdentifier:(id)a2 task:(id)a3 loggingContext:(id)a4 applicationName:(id)a5 profile:(id)a6 overrides:(id)a7 modelOverrideURL:(id)a8 originalAudioFileURL:(id)a9 codec:(id)a10 narrowband:(BOOL)a11 detectUtterances:(BOOL)a12 censorSpeech:(BOOL)a13 farField:(BOOL)a14 secureOfflineOnly:(BOOL)a15 shouldStoreAudioOnDevice:(BOOL)a16 continuousListening:(BOOL)a17 shouldHandleCapitalization:(BOOL)a18 isSpeechAPIRequest:(BOOL)a19 maximumRecognitionDuration:(double)a20 endpointStart:(double)a21 inputOrigin:(id)a22 location:(id)a23 jitGrammar:(id)a24 deliverEagerPackage:(BOOL)a25 disableDeliveringAsrFeatures:(BOOL)a26 enableEmojiRecognition:(BOOL)a27 enableAutoPunctuation:(BOOL)a28 enableVoiceCommands:(BOOL)a29 sharedUserInfos:(id)a30 prefixText:(id)a31 postfixText:(id)a32 selectedText:(id)a33 powerContext:(id)a34;
- (id)initWithLanguage:(id)a0 requestIdentifier:(id)a1 dictationUIInteractionIdentifier:(id)a2 task:(id)a3 loggingContext:(id)a4 applicationName:(id)a5 profile:(id)a6 overrides:(id)a7 modelOverrideURL:(id)a8 originalAudioFileURL:(id)a9 codec:(id)a10 narrowband:(BOOL)a11 detectUtterances:(BOOL)a12 censorSpeech:(BOOL)a13 farField:(BOOL)a14 secureOfflineOnly:(BOOL)a15 shouldStoreAudioOnDevice:(BOOL)a16 continuousListening:(BOOL)a17 shouldHandleCapitalization:(BOOL)a18 isSpeechAPIRequest:(BOOL)a19 maximumRecognitionDuration:(double)a20 endpointStart:(double)a21 inputOrigin:(id)a22 location:(id)a23 jitGrammar:(id)a24 deliverEagerPackage:(BOOL)a25 disableDeliveringAsrFeatures:(BOOL)a26 enableEmojiRecognition:(BOOL)a27 enableAutoPunctuation:(BOOL)a28 enableVoiceCommands:(BOOL)a29 sharedUserInfos:(id)a30 prefixText:(id)a31 postfixText:(id)a32 selectedText:(id)a33 powerContext:(id)a34 recognitionStart:(double)a35;
- (id)initWithLanguage:(id)a0 requestIdentifier:(id)a1 dictationUIInteractionIdentifier:(id)a2 task:(id)a3 loggingContext:(id)a4 applicationName:(id)a5 profile:(id)a6 overrides:(id)a7 modelOverrideURL:(id)a8 originalAudioFileURL:(id)a9 codec:(id)a10 narrowband:(BOOL)a11 detectUtterances:(BOOL)a12 censorSpeech:(BOOL)a13 farField:(BOOL)a14 secureOfflineOnly:(BOOL)a15 shouldStoreAudioOnDevice:(BOOL)a16 continuousListening:(BOOL)a17 shouldHandleCapitalization:(BOOL)a18 isSpeechAPIRequest:(BOOL)a19 maximumRecognitionDuration:(double)a20 endpointStart:(double)a21 inputOrigin:(id)a22 location:(id)a23 jitGrammar:(id)a24 deliverEagerPackage:(BOOL)a25 disableDeliveringAsrFeatures:(BOOL)a26 enableEmojiRecognition:(BOOL)a27 enableAutoPunctuation:(BOOL)a28 enableVoiceCommands:(BOOL)a29 sharedUserInfos:(id)a30 prefixText:(id)a31 postfixText:(id)a32 selectedText:(id)a33 powerContext:(id)a34 recognitionStart:(double)a35 shouldGenerateVoiceCommandCandidates:(BOOL)a36;
- (id)initWithLanguage:(id)a0 requestIdentifier:(id)a1 dictationUIInteractionIdentifier:(id)a2 task:(id)a3 loggingContext:(id)a4 applicationName:(id)a5 profile:(id)a6 overrides:(id)a7 modelOverrideURL:(id)a8 originalAudioFileURL:(id)a9 codec:(id)a10 narrowband:(BOOL)a11 detectUtterances:(BOOL)a12 censorSpeech:(BOOL)a13 farField:(BOOL)a14 secureOfflineOnly:(BOOL)a15 shouldStoreAudioOnDevice:(BOOL)a16 continuousListening:(BOOL)a17 shouldHandleCapitalization:(BOOL)a18 isSpeechAPIRequest:(BOOL)a19 maximumRecognitionDuration:(double)a20 endpointStart:(double)a21 inputOrigin:(id)a22 location:(id)a23 jitGrammar:(id)a24 deliverEagerPackage:(BOOL)a25 disableDeliveringAsrFeatures:(BOOL)a26 enableEmojiRecognition:(BOOL)a27 enableAutoPunctuation:(BOOL)a28 enableVoiceCommands:(BOOL)a29 sharedUserInfos:(id)a30 prefixText:(id)a31 postfixText:(id)a32 selectedText:(id)a33 powerContext:(id)a34 recognitionStart:(double)a35 shouldGenerateVoiceCommandCandidates:(BOOL)a36 asrId:(id)a37;
- (id)initWithLanguage:(id)a0 requestIdentifier:(id)a1 dictationUIInteractionIdentifier:(id)a2 task:(id)a3 loggingContext:(id)a4 applicationName:(id)a5 profile:(id)a6 overrides:(id)a7 modelOverrideURL:(id)a8 originalAudioFileURL:(id)a9 codec:(id)a10 narrowband:(BOOL)a11 detectUtterances:(BOOL)a12 censorSpeech:(BOOL)a13 farField:(BOOL)a14 secureOfflineOnly:(BOOL)a15 shouldStoreAudioOnDevice:(BOOL)a16 continuousListening:(BOOL)a17 shouldHandleCapitalization:(BOOL)a18 isSpeechAPIRequest:(BOOL)a19 maximumRecognitionDuration:(double)a20 endpointStart:(double)a21 inputOrigin:(id)a22 location:(id)a23 jitGrammar:(id)a24 deliverEagerPackage:(BOOL)a25 disableDeliveringAsrFeatures:(BOOL)a26 sharedUserIds:(id)a27 enableEmojiRecognition:(BOOL)a28 enableAutoPunctuation:(BOOL)a29;
- (id)initWithLanguage:(id)a0 requestIdentifier:(id)a1 dictationUIInteractionIdentifier:(id)a2 task:(id)a3 loggingContext:(id)a4 applicationName:(id)a5 profile:(id)a6 overrides:(id)a7 modelOverrideURL:(id)a8 originalAudioFileURL:(id)a9 codec:(id)a10 narrowband:(BOOL)a11 detectUtterances:(BOOL)a12 censorSpeech:(BOOL)a13 farField:(BOOL)a14 secureOfflineOnly:(BOOL)a15 shouldStoreAudioOnDevice:(BOOL)a16 continuousListening:(BOOL)a17 shouldHandleCapitalization:(BOOL)a18 isSpeechAPIRequest:(BOOL)a19 maximumRecognitionDuration:(double)a20 endpointStart:(double)a21 inputOrigin:(id)a22 location:(id)a23 jitGrammar:(id)a24 deliverEagerPackage:(BOOL)a25 disableDeliveringAsrFeatures:(BOOL)a26 sharedUserIds:(id)a27 enableEmojiRecognition:(BOOL)a28 enableAutoPunctuation:(BOOL)a29 enableVoiceCommands:(BOOL)a30;
- (id)initWithLanguage:(id)a0 requestIdentifier:(id)a1 interactionIdentifier:(id)a2 task:(id)a3 loggingContext:(id)a4 applicationName:(id)a5 profile:(id)a6 overrides:(id)a7 modelOverrideURL:(id)a8 originalAudioFileURL:(id)a9 codec:(id)a10 narrowband:(BOOL)a11 detectUtterances:(BOOL)a12 censorSpeech:(BOOL)a13 farField:(BOOL)a14 secureOfflineOnly:(BOOL)a15 shouldStoreAudioOnDevice:(BOOL)a16 continuousListening:(BOOL)a17 shouldHandleCapitalization:(BOOL)a18 isSpeechAPIRequest:(BOOL)a19 maximumRecognitionDuration:(double)a20 endpointStart:(double)a21 inputOrigin:(id)a22 location:(id)a23 jitGrammar:(id)a24 deliverEagerPackage:(BOOL)a25 disableDeliveringAsrFeatures:(BOOL)a26;
- (id)initWithLanguage:(id)a0 requestIdentifier:(id)a1 interactionIdentifier:(id)a2 task:(id)a3 loggingContext:(id)a4 applicationName:(id)a5 profile:(id)a6 overrides:(id)a7 modelOverrideURL:(id)a8 originalAudioFileURL:(id)a9 codec:(id)a10 narrowband:(BOOL)a11 detectUtterances:(BOOL)a12 censorSpeech:(BOOL)a13 farField:(BOOL)a14 secureOfflineOnly:(BOOL)a15 shouldStoreAudioOnDevice:(BOOL)a16 continuousListening:(BOOL)a17 shouldHandleCapitalization:(BOOL)a18 maximumRecognitionDuration:(double)a19 endpointStart:(double)a20 inputOrigin:(id)a21 location:(id)a22 jitGrammar:(id)a23 deliverEagerPackage:(BOOL)a24 disableDeliveringAsrFeatures:(BOOL)a25;

@end
