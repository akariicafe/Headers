@class NSArray, NSDictionary, NSString, NSLocale, NSCharacterSet, NSXPCConnection;

@interface CHRemoteRecognizer : NSObject <CHRecognizing> {
    BOOL _shouldUseStrokeReordering;
    NSXPCConnection *__connection;
}

@property (readonly, copy, nonatomic) NSArray *locales;
@property (readonly, copy, nonatomic) NSDictionary *activeCharacterSetPerLocale;
@property (nonatomic) BOOL shouldUseTextReplacements;
@property (nonatomic) long long priority;
@property (readonly, nonatomic) int recognitionMode;
@property (nonatomic) int contentType;
@property (nonatomic) int autoCapitalizationMode;
@property (nonatomic) int autoCorrectionMode;
@property (nonatomic) int baseWritingDirection;
@property (readonly, copy, nonatomic) NSLocale *locale;
@property (nonatomic) unsigned long long maxRecognitionResultCount;
@property (retain, nonatomic) NSCharacterSet *activeCharacterSet;
@property (nonatomic) struct CGSize { double width; double height; } minimumDrawingSize;
@property (readonly, nonatomic) BOOL enableCachingIfAvailable;
@property (readonly, nonatomic) BOOL enableGen2ModelIfAvailable;
@property (readonly, nonatomic) BOOL enableGen2CharacterLMIfAvailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)maxRequestStrokeCountForLocale:(id)a0;
+ (long long)absoluteMaxStrokeCountPerRequest;
+ (id)newRemoteRecognizerWithMode:(int)a0 locales:(id)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithMode:(int)a0 locale:(id)a1;
- (id)initWithMode:(int)a0 locale:(id)a1 recognizerOptions:(id)a2;
- (id)initWithMode:(int)a0 locales:(id)a1 activeCharacterSetPerLocale:(id)a2 recognizerOptions:(id)a3;
- (id)textRecognitionResultForDrawing:(id)a0 options:(id)a1 error:(id *)a2;
- (id)transcriptionPathsForTokenizedTextResult:(id)a0 withHistory:(id)a1 scores:(id *)a2 error:(id *)a3;

@end
