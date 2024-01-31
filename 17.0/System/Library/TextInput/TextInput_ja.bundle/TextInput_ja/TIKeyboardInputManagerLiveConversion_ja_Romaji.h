@class NSString, NSMutableArray, TIMathSymbolPunctuationController;

@interface TIKeyboardInputManagerLiveConversion_ja_Romaji : TIKeyboardInputManagerLiveConversion_ja {
    TIMathSymbolPunctuationController *_mathSymbolPunctuationController;
}

@property (readonly, nonatomic) NSMutableArray *externalIndexToInternalIndexMappingArray;
@property (nonatomic) unsigned long long externalInputIndex;
@property (copy, nonatomic) NSString *externalString;

+ (Class)wordSearchClass;

- (id)searchStringForMarkedText;
- (void)clearInput;
- (void)dealloc;
- (void)updateState;
- (id)inputString;
- (void).cxx_destruct;
- (void)setInputIndex:(unsigned int)a0;
- (id)deleteFromInput:(unsigned long long *)a0;
- (id)initWithConfig:(id)a0 keyboardState:(id)a1;
- (void)setInput:(id)a0;
- (void)addInput:(id)a0 withContext:(id)a1;
- (void)inputLocationChanged;
- (void)_addInput:(id)a0;
- (id)displayStringForSearch;
- (id)hiraganaStringFor:(id)a0;
- (id)rawInputStringFrom:(id)a0;
- (id)segmentAdjustInputManager:(unsigned long long)a0;
- (id)transliterate:(id)a0;

@end
