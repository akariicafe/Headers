@class EARAudioAnalytics, NSArray, EARSpeechRecognition;

@interface EARSpeechRecognitionResultPackage : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) EARSpeechRecognition *recognition;
@property (readonly, copy, nonatomic) EARSpeechRecognition *preITNRecognition;
@property (readonly, copy, nonatomic) EARSpeechRecognition *unrepairedRecognition;
@property (readonly, nonatomic) BOOL isFinal;
@property (readonly, copy, nonatomic) EARAudioAnalytics *audioAnalytics;
@property (readonly, nonatomic) double utteranceStart;
@property (readonly, copy, nonatomic) NSArray *correctPartialResultIndexList;
@property (readonly, copy, nonatomic) NSArray *nBestVoiceCommandInterpretations;
@property (readonly, copy, nonatomic) NSArray *preITNNBestVoiceCommandInterpretations;
@property (readonly, nonatomic) BOOL recognitionPaused;
@property (readonly, nonatomic) BOOL firstResultAfterResume;

- (void)encodeWithCoder:(id)a0;
- (id)initWithPackage:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
