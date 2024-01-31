@class NSDecimalNumber, NSString, NSArray, UIColor, NSDate, NSCalendar;
@protocol PKPeerPaymentRecurringPaymentDetailSectionControllerDelegate;

@interface PKPeerPaymentRecurringPaymentDetailSectionController : PKDynamicListSectionController <PKCurrencyAmountEntryCollectionViewCellDelegate, PKDateSelectorCollectionViewCellDelegate, _UIDatePickerCompactStyleDelegate> {
    NSArray *_rowItems;
    BOOL _showStartDateSelector;
    NSString *_startDateTitle;
    NSCalendar *_productCalendar;
    unsigned long long _mode;
}

@property (readonly, copy, nonatomic) NSString *currency;
@property (readonly, copy, nonatomic) NSDecimalNumber *amount;
@property (copy, nonatomic) NSArray *frequencyOptions;
@property (readonly, nonatomic) unsigned long long frequency;
@property (readonly, copy, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) unsigned long long status;
@property (readonly, weak, nonatomic) id<PKPeerPaymentRecurringPaymentDetailSectionControllerDelegate> delegate;
@property (nonatomic) BOOL isEditable;
@property (nonatomic) BOOL hideAmount;
@property (copy, nonatomic) UIColor *titleColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)identifiers;
- (void).cxx_destruct;
- (void)setStatus:(unsigned long long)a0;
- (void)_datePicker:(id)a0 didSelectComponent:(long long)a1;
- (void)didSelectItem:(id)a0;
- (void)setCurrency:(id)a0;
- (void)_decorateAmountListCell:(id)a0 forItem:(id)a1;
- (void)_decorateDateListCell:(id)a0 forItem:(id)a1;
- (void)_decorateDateSelectorListCell:(id)a0 forItem:(id)a1;
- (void)_didTapDateButton:(id)a0;
- (void)_handleFrequencyChanged:(unsigned long long)a0;
- (void)_toggleShowStartDateSelector;
- (void)amountDidChange:(id)a0;
- (id)cellRegistrationForItem:(id)a0;
- (void)dateSelectorCollectionViewCell:(id)a0 didUpdateDate:(id)a1;
- (id)initWithRecurringPayment:(id)a0 productTimeZone:(id)a1 mode:(unsigned long long)a2 delegate:(id)a3;
- (id)layoutWithLayoutEnvironment:(id)a0 sectionIdentifier:(id)a1;
- (void)reloadItemsAnimated:(BOOL)a0;
- (BOOL)shouldHighlightItem:(id)a0;
- (id)snapshotWithPreviousSnapshot:(id)a0 forSectionIdentifier:(id)a1;
- (void)updateWithRecurringPayment:(id)a0;

@end
