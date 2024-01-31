@class NSString, NSObject, BRLTTranslationService;
@protocol OS_dispatch_queue;

@interface SCROBrailleTranslationManager : NSObject

@property (class, readonly) SCROBrailleTranslationManager *sharedManager;

@property (retain, nonatomic) BRLTTranslationService *translationService;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) BOOL primaryTableSupportsContractedBraille;
@property (readonly, nonatomic) BOOL primaryTableSupportsEightDotBraille;
@property (nonatomic) BOOL alwaysUsesNemethCodeForTechnicalText;
@property (copy, nonatomic) NSString *defaultLanguage;

- (id)serviceIdentifier;
- (id)init;
- (void).cxx_destruct;
- (id)printBrailleForText:(id)a0 language:(id)a1 mode:(unsigned long long)a2 textPositionsRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 locations:(id *)a4 textFormattingRanges:(id)a5;
- (id)textForPrintBraille:(id)a0 language:(id)a1 mode:(unsigned long long)a2 locations:(id *)a3;
- (void)loadTranslatorWithServiceIdentifier:(id)a0;
- (void)loadTranslatorWithServiceIdentifier:(id)a0 forUnitTesting:(BOOL)a1;
- (BOOL)primaryTableSupportsRoundTripping;

@end
