@class NSString, NSMutableArray, NSMutableString;

@interface CRLanguageRecognitionContext : NSObject {
    NSString *_recognizedLanguage;
}

@property (retain) NSMutableArray *featuresAccumulator;
@property (retain) NSMutableString *contextString;
@property unsigned long long script;
@property struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } languageRecognitionLock;
@property (readonly) NSString *recognizedLanguage;
@property (readonly) NSString *defaultLocale;

- (void).cxx_destruct;
- (void)_updateFeatureLocale:(id)a0;
- (id)initWithScript:(unsigned long long)a0 defaultLocale:(id)a1;
- (void)processFeature:(id)a0 recognizer:(id)a1;
- (void)runRecognitionWithRecognizer:(id)a0 force:(BOOL)a1;

@end
