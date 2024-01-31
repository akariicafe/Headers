@class TITextInputTraits;

@interface TISmartInsertDeleteController : NSObject

@property (readonly, nonatomic) TITextInputTraits *textInputTraits;
@property (nonatomic, getter=isEnabled) BOOL enabled;

- (void).cxx_destruct;
- (id)initWithTextInputTraits:(id)a0;
- (void)smartDeleteForDocumentState:(id)a0 outBeforeLength:(unsigned long long *)a1 outAfterLength:(unsigned long long *)a2;
- (void)smartInsertForDocumentState:(id)a0 stringToInsert:(id)a1 outBeforeString:(id *)a2 outAfterString:(id *)a3;
- (unsigned long long)_numberOfCharactersInSet:(id)a0 atBeginningOfString:(id)a1;
- (unsigned long long)_numberOfCharactersInSet:(id)a0 atEndOfString:(id)a1;

@end
