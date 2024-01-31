@class TITextInputTraits;

@interface TIAutoshiftController : NSObject

@property (readonly, nonatomic) TITextInputTraits *textInputTraits;
@property (nonatomic, getter=isEnabled) BOOL enabled;

- (void).cxx_destruct;
- (id)initWithTextInputTraits:(id)a0;
- (unsigned long long)actionForDocumentState:(id)a0 inputMangerState:(id)a1;
- (BOOL)isSelectionAtSentenceAutoshiftBoundaryWithDocumentState:(id)a0 inputManagerState:(id)a1;

@end
