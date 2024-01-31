@class NSError, NSString, CHTokenizedTextResult, CHRecognitionInsightRequest, NSDictionary, NSLocale, NSCharacterSet, CHDrawing;

@interface CHRecognitionInsight : NSObject {
    int _recognizerRecognitionMode;
    int _recognizerContentType;
    int _autoCapitalizationMode;
    int _autoCorrectionMode;
    CHRecognitionInsightRequest *_insightRequest;
    NSLocale *_recognizerLocale;
    int _baseWritingDirection;
    NSCharacterSet *_recognizerActiveCharacterSet;
    NSDictionary *_recognizerOptions;
    unsigned long long _recognizerMaxRecognitionResultCount;
    CHDrawing *_inputDrawing;
    CHTokenizedTextResult *_textResult;
    NSError *_recognitionError;
    struct CGSize { double width; double height; } _recognizerMinimumDrawingSize;
}

@property (readonly, nonatomic) CHRecognitionInsightRequest *insightRequest;
@property (readonly, copy, nonatomic) NSLocale *recognizerLocale;
@property (readonly, nonatomic) int recognizerRecognitionMode;
@property (readonly, nonatomic) int recognizerContentType;
@property (readonly, nonatomic) int autoCapitalizationMode;
@property (readonly, nonatomic) int autoCorrectionMode;
@property (readonly, nonatomic) int baseWritingDirection;
@property (readonly, copy, nonatomic) NSCharacterSet *recognizerActiveCharacterSet;
@property (readonly, copy, nonatomic) NSDictionary *recognizerOptions;
@property (readonly, nonatomic) unsigned long long recognizerMaxRecognitionResultCount;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } recognizerMinimumDrawingSize;
@property (readonly, nonatomic) NSString *recognizerRecognitionModeDescription;
@property (readonly, nonatomic) NSString *recognizerContentTypeDescription;
@property (readonly, nonatomic) NSString *autoCapitalizationModeDescription;
@property (readonly, nonatomic) NSString *autoCorrectionModeDescription;
@property (readonly, nonatomic) NSString *baseWritingDirectionDescription;
@property (readonly, copy, nonatomic) CHDrawing *inputDrawing;
@property (readonly, copy, nonatomic) CHTokenizedTextResult *textResult;
@property (readonly, copy, nonatomic) NSError *recognitionError;

- (id)description;
- (void).cxx_destruct;
- (void)recordConfigurationForRecognizer:(id)a0 options:(id)a1;
- (void)recordInputDrawing:(id)a0;
- (void)recordInsightRequest:(id)a0;
- (void)recordTextResult:(id)a0 recognitionError:(id)a1;

@end
