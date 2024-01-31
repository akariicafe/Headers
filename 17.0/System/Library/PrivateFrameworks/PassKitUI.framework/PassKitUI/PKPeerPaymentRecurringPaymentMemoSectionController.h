@class UIColor, PKPeerPaymentRecurringPaymentMemoRowItem, PKPeerPaymentRecurringPaymentMemo;
@protocol PKPeerPaymentRecurringPaymentMemoSectionControllerDelegate;

@interface PKPeerPaymentRecurringPaymentMemoSectionController : PKDynamicListSectionController <PKPeerPaymentRecurringPaymentMemoCellDelegate> {
    id<PKPeerPaymentRecurringPaymentMemoSectionControllerDelegate> _delegate;
    PKPeerPaymentRecurringPaymentMemoRowItem *_item;
}

@property (retain, nonatomic) PKPeerPaymentRecurringPaymentMemo *recurringPaymentMemo;
@property (nonatomic) BOOL isEditable;
@property (copy, nonatomic) UIColor *memoTextColor;

- (id)identifiers;
- (void).cxx_destruct;
- (void)_reloadItemWithMemo:(id)a0 animated:(BOOL)a1;
- (id)cellRegistrationForItem:(id)a0;
- (id)initWithRecurringPaymentMemo:(id)a0 contact:(id)a1 delegate:(id)a2;
- (id)layoutWithLayoutEnvironment:(id)a0 sectionIdentifier:(id)a1;
- (void)memoIconWasTapped;
- (void)memoTextWasUpdated:(id)a0;
- (void)requestBecomeFirstResponder;
- (void)setRecurringPaymentMemoWithTextSuggestion:(id)a0;
- (BOOL)shouldHighlightItem:(id)a0;
- (id)snapshotWithPreviousSnapshot:(id)a0 forSectionIdentifier:(id)a1;

@end
