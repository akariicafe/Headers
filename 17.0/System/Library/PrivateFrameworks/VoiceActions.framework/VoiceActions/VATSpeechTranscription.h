@class NSString, NSLocale;

@interface VATSpeechTranscription : NSObject

@property (readonly, nonatomic) NSLocale *locale;
@property (readonly, copy, nonatomic) NSString *formattedString;
@property (readonly, copy, nonatomic) NSString *sanitizedFormattedString;
@property (readonly, nonatomic) double minConfidence;
@property (readonly, nonatomic) double maxConfidence;
@property (readonly, nonatomic) double confidence;
@property (readonly, nonatomic, getter=isLowConfidence) BOOL lowConfidence;

- (void).cxx_destruct;
- (id)initWithFormattedString:(id)a0 locale:(id)a1 confidence:(double)a2 minConfidence:(double)a3 maxConfidence:(double)a4;

@end
