@class NSString, NSArray, NSLocale;

@interface VATSpeechRecognitionResult : NSObject

@property (nonatomic, getter=isFinal) BOOL final;
@property (nonatomic, getter=isStable) BOOL stable;
@property (retain, nonatomic) NSString *modelVersion;
@property (copy, nonatomic) NSLocale *locale;
@property (retain, nonatomic) NSArray *transcriptions;

+ (id)emptyResultWithLocale:(id)a0 isFinal:(BOOL)a1;
+ (id)resultWithPackage:(id)a0 locale:(id)a1 modelVersion:(id)a2 isFinal:(BOOL)a3;
+ (id)resultWithResults:(id)a0 locale:(id)a1 modelVersion:(id)a2 isFinal:(BOOL)a3;

- (void).cxx_destruct;
- (id)bestTranscription;
- (id)_transcriptionWithResult:(id)a0 locale:(id)a1;
- (id)initEmptyResultWithLocale:(id)a0 isFinal:(BOOL)a1;
- (id)initWithPackage:(id)a0 locale:(id)a1 modelVersion:(id)a2 isFinal:(BOOL)a3;
- (id)initWithResults:(id)a0 locale:(id)a1 modelVersion:(id)a2 isFinal:(BOOL)a3;

@end
