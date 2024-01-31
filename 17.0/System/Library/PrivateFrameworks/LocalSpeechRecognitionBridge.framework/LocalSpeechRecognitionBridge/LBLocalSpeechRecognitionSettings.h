@class AFPowerContextPolicy, NSString, NSArray, NSDictionary, CLLocation;

@interface LBLocalSpeechRecognitionSettings : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *requestId;
@property (readonly, nonatomic) NSString *inputOrigin;
@property (readonly, nonatomic) unsigned long long speechRecognitionTask;
@property (readonly, nonatomic) unsigned long long speechRecognitionMode;
@property (readonly, nonatomic) CLLocation *location;
@property (readonly, nonatomic) NSArray *jitGrammar;
@property (readonly, nonatomic) NSString *overrideModelPath;
@property (readonly, nonatomic) NSString *applicationName;
@property (readonly, nonatomic) BOOL detectUtterances;
@property (readonly, nonatomic) BOOL continuousListening;
@property (readonly, nonatomic) BOOL shouldHandleCapitalization;
@property (readonly, nonatomic) BOOL secureOfflineOnly;
@property (readonly, nonatomic) double maximumRecognitionDuration;
@property (readonly, nonatomic) NSDictionary *recognitionOverrides;
@property (readonly, nonatomic) BOOL shouldStoreAudioOnDevice;
@property (readonly, nonatomic) BOOL deliverEagerPackage;
@property (readonly, nonatomic) BOOL enableEmojiRecognition;
@property (readonly, nonatomic) BOOL enableAutoPunctuation;
@property (readonly, nonatomic) NSString *UILanguage;
@property (readonly, nonatomic) BOOL enableVoiceCommands;
@property (readonly, nonatomic) NSString *dictationUIInteractionId;
@property (readonly, nonatomic) NSArray *sharedUserInfos;
@property (readonly, nonatomic) NSString *prefixText;
@property (readonly, nonatomic) NSString *postfixText;
@property (readonly, nonatomic) NSString *selectedText;
@property (readonly, nonatomic) AFPowerContextPolicy *powerContext;
@property (readonly, nonatomic) BOOL shouldStartAudioCapture;
@property (readonly, nonatomic) unsigned long long audioCaptureStartHostTime;
@property (readonly, nonatomic) long long audioRecordType;
@property (readonly, nonatomic) NSString *audioRecordDeviceId;
@property (readonly, nonatomic) BOOL shouldGenerateVoiceCommandCandidates;

+ (id)taskString:(unsigned long long)a0;
+ (id)getTaskStringFromSpeechRecognitionSettings:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRequestId:(id)a0 inputOrigin:(id)a1 speechRecognitionTaskName:(unsigned long long)a2 speechRecognitionMode:(unsigned long long)a3 location:(id)a4 jitGrammar:(id)a5 overrideModelPath:(id)a6 applicationName:(id)a7 detectUtterances:(BOOL)a8 continuousListening:(BOOL)a9 shouldHandleCapitalization:(BOOL)a10 secureOfflineOnly:(BOOL)a11 maximumRecognitionDuration:(double)a12 recognitionOverrides:(id)a13 shouldStoreAudioOnDevice:(BOOL)a14 deliverEagerPackage:(BOOL)a15 enableEmojiRecognition:(BOOL)a16 enableAutoPunctuation:(BOOL)a17 UILanguage:(id)a18 enableVoiceCommands:(BOOL)a19 dictationUIInteractionId:(id)a20 sharedUserInfos:(id)a21 prefixText:(id)a22 postfixText:(id)a23 selectedText:(id)a24 powerContext:(id)a25 shouldStartAudioCapture:(BOOL)a26 audioCaptureStartHostTime:(unsigned long long)a27 audioRecordType:(long long)a28 audioRecordDeviceId:(id)a29;
- (id)initWithRequestId:(id)a0 inputOrigin:(id)a1 speechRecognitionTaskName:(unsigned long long)a2 speechRecognitionMode:(unsigned long long)a3 location:(id)a4 jitGrammar:(id)a5 overrideModelPath:(id)a6 applicationName:(id)a7 detectUtterances:(BOOL)a8 continuousListening:(BOOL)a9 shouldHandleCapitalization:(BOOL)a10 secureOfflineOnly:(BOOL)a11 maximumRecognitionDuration:(double)a12 recognitionOverrides:(id)a13 shouldStoreAudioOnDevice:(BOOL)a14 deliverEagerPackage:(BOOL)a15 enableEmojiRecognition:(BOOL)a16 enableAutoPunctuation:(BOOL)a17 UILanguage:(id)a18 enableVoiceCommands:(BOOL)a19 dictationUIInteractionId:(id)a20 sharedUserInfos:(id)a21 prefixText:(id)a22 postfixText:(id)a23 selectedText:(id)a24 powerContext:(id)a25 shouldStartAudioCapture:(BOOL)a26 audioCaptureStartHostTime:(unsigned long long)a27 audioRecordType:(long long)a28 audioRecordDeviceId:(id)a29 shouldGenerateVoiceCommandCandidates:(BOOL)a30;
- (id)initWithRequestId:(id)a0 inputOrigin:(id)a1 speechRecognitionTaskName:(unsigned long long)a2 location:(id)a3 jitGrammar:(id)a4;
- (id)initWithRequestId:(id)a0 inputOrigin:(id)a1 speechRecognitionTaskName:(unsigned long long)a2 location:(id)a3 jitGrammar:(id)a4 overrideModelPath:(id)a5;
- (id)initWithRequestId:(id)a0 inputOrigin:(id)a1 speechRecognitionTaskName:(unsigned long long)a2 location:(id)a3 jitGrammar:(id)a4 overrideModelPath:(id)a5 applicationName:(id)a6 detectUtterances:(BOOL)a7 continuousListening:(BOOL)a8 shouldHandleCapitalization:(BOOL)a9 secureOfflineOnly:(BOOL)a10 maximumRecognitionDuration:(double)a11 recognitionOverrides:(id)a12;
- (id)initWithRequestId:(id)a0 inputOrigin:(id)a1 speechRecognitionTaskName:(unsigned long long)a2 location:(id)a3 jitGrammar:(id)a4 overrideModelPath:(id)a5 applicationName:(id)a6 detectUtterances:(BOOL)a7 continuousListening:(BOOL)a8 shouldHandleCapitalization:(BOOL)a9 secureOfflineOnly:(BOOL)a10 maximumRecognitionDuration:(double)a11 recognitionOverrides:(id)a12 shouldStoreAudioOnDevice:(BOOL)a13;
- (id)initWithRequestId:(id)a0 inputOrigin:(id)a1 speechRecognitionTaskName:(unsigned long long)a2 location:(id)a3 jitGrammar:(id)a4 overrideModelPath:(id)a5 applicationName:(id)a6 detectUtterances:(BOOL)a7 continuousListening:(BOOL)a8 shouldHandleCapitalization:(BOOL)a9 secureOfflineOnly:(BOOL)a10 maximumRecognitionDuration:(double)a11 recognitionOverrides:(id)a12 shouldStoreAudioOnDevice:(BOOL)a13 deliverEagerPackage:(BOOL)a14;
- (id)initWithRequestId:(id)a0 inputOrigin:(id)a1 speechRecognitionTaskName:(unsigned long long)a2 location:(id)a3 jitGrammar:(id)a4 overrideModelPath:(id)a5 applicationName:(id)a6 detectUtterances:(BOOL)a7 continuousListening:(BOOL)a8 shouldHandleCapitalization:(BOOL)a9 secureOfflineOnly:(BOOL)a10 maximumRecognitionDuration:(double)a11 recognitionOverrides:(id)a12 shouldStoreAudioOnDevice:(BOOL)a13 deliverEagerPackage:(BOOL)a14 enableEmojiRecognition:(BOOL)a15 enableAutoPunctuation:(BOOL)a16 UILanguage:(id)a17 enableVoiceCommands:(BOOL)a18 dictationUIInteractionId:(id)a19 sharedUserInfos:(id)a20;
- (id)initWithRequestId:(id)a0 inputOrigin:(id)a1 speechRecognitionTaskName:(unsigned long long)a2 location:(id)a3 jitGrammar:(id)a4 overrideModelPath:(id)a5 applicationName:(id)a6 detectUtterances:(BOOL)a7 continuousListening:(BOOL)a8 shouldHandleCapitalization:(BOOL)a9 secureOfflineOnly:(BOOL)a10 maximumRecognitionDuration:(double)a11 recognitionOverrides:(id)a12 shouldStoreAudioOnDevice:(BOOL)a13 deliverEagerPackage:(BOOL)a14 enableEmojiRecognition:(BOOL)a15 enableAutoPunctuation:(BOOL)a16 UILanguage:(id)a17 enableVoiceCommands:(BOOL)a18 dictationUIInteractionId:(id)a19 sharedUserInfos:(id)a20 prefixText:(id)a21 postfixText:(id)a22 selectedText:(id)a23;
- (id)initWithRequestId:(id)a0 inputOrigin:(id)a1 speechRecognitionTaskName:(unsigned long long)a2 location:(id)a3 jitGrammar:(id)a4 overrideModelPath:(id)a5 applicationName:(id)a6 detectUtterances:(BOOL)a7 continuousListening:(BOOL)a8 shouldHandleCapitalization:(BOOL)a9 secureOfflineOnly:(BOOL)a10 maximumRecognitionDuration:(double)a11 recognitionOverrides:(id)a12 shouldStoreAudioOnDevice:(BOOL)a13 deliverEagerPackage:(BOOL)a14 enableEmojiRecognition:(BOOL)a15 enableAutoPunctuation:(BOOL)a16 UILanguage:(id)a17 enableVoiceCommands:(BOOL)a18 dictationUIInteractionId:(id)a19 sharedUserInfos:(id)a20 prefixText:(id)a21 postfixText:(id)a22 selectedText:(id)a23 powerContext:(id)a24;
- (id)initWithRequestId:(id)a0 inputOrigin:(id)a1 speechRecognitionTaskName:(unsigned long long)a2 location:(id)a3 jitGrammar:(id)a4 overrideModelPath:(id)a5 applicationName:(id)a6 detectUtterances:(BOOL)a7 continuousListening:(BOOL)a8 shouldHandleCapitalization:(BOOL)a9 secureOfflineOnly:(BOOL)a10 maximumRecognitionDuration:(double)a11 recognitionOverrides:(id)a12 shouldStoreAudioOnDevice:(BOOL)a13 deliverEagerPackage:(BOOL)a14 sharedUserIds:(id)a15;
- (id)initWithRequestId:(id)a0 inputOrigin:(id)a1 speechRecognitionTaskName:(unsigned long long)a2 location:(id)a3 jitGrammar:(id)a4 overrideModelPath:(id)a5 applicationName:(id)a6 detectUtterances:(BOOL)a7 continuousListening:(BOOL)a8 shouldHandleCapitalization:(BOOL)a9 secureOfflineOnly:(BOOL)a10 maximumRecognitionDuration:(double)a11 recognitionOverrides:(id)a12 shouldStoreAudioOnDevice:(BOOL)a13 deliverEagerPackage:(BOOL)a14 sharedUserIds:(id)a15 enableEmojiRecognition:(BOOL)a16 enableAutoPunctuation:(BOOL)a17;
- (id)initWithRequestId:(id)a0 inputOrigin:(id)a1 speechRecognitionTaskName:(unsigned long long)a2 location:(id)a3 jitGrammar:(id)a4 overrideModelPath:(id)a5 applicationName:(id)a6 detectUtterances:(BOOL)a7 continuousListening:(BOOL)a8 shouldHandleCapitalization:(BOOL)a9 secureOfflineOnly:(BOOL)a10 maximumRecognitionDuration:(double)a11 recognitionOverrides:(id)a12 shouldStoreAudioOnDevice:(BOOL)a13 deliverEagerPackage:(BOOL)a14 sharedUserIds:(id)a15 enableEmojiRecognition:(BOOL)a16 enableAutoPunctuation:(BOOL)a17 UILanguage:(id)a18;
- (id)initWithRequestId:(id)a0 inputOrigin:(id)a1 speechRecognitionTaskName:(unsigned long long)a2 location:(id)a3 jitGrammar:(id)a4 overrideModelPath:(id)a5 applicationName:(id)a6 detectUtterances:(BOOL)a7 continuousListening:(BOOL)a8 shouldHandleCapitalization:(BOOL)a9 secureOfflineOnly:(BOOL)a10 maximumRecognitionDuration:(double)a11 recognitionOverrides:(id)a12 shouldStoreAudioOnDevice:(BOOL)a13 deliverEagerPackage:(BOOL)a14 sharedUserIds:(id)a15 enableEmojiRecognition:(BOOL)a16 enableAutoPunctuation:(BOOL)a17 UILanguage:(id)a18 enableVoiceCommands:(BOOL)a19;
- (id)initWithRequestId:(id)a0 inputOrigin:(id)a1 speechRecognitionTaskName:(unsigned long long)a2 location:(id)a3 jitGrammar:(id)a4 overrideModelPath:(id)a5 applicationName:(id)a6 detectUtterances:(BOOL)a7 continuousListening:(BOOL)a8 shouldHandleCapitalization:(BOOL)a9 secureOfflineOnly:(BOOL)a10 maximumRecognitionDuration:(double)a11 recognitionOverrides:(id)a12 shouldStoreAudioOnDevice:(BOOL)a13 deliverEagerPackage:(BOOL)a14 sharedUserIds:(id)a15 enableEmojiRecognition:(BOOL)a16 enableAutoPunctuation:(BOOL)a17 UILanguage:(id)a18 enableVoiceCommands:(BOOL)a19 dictationUIInteractionId:(id)a20;

@end
