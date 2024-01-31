@class NSDecimalNumber, NSString, NSArray, UICollectionViewCellRegistration;
@protocol PKThresholdTopUpSelectionSectionControllerDelegate;

@interface PKThresholdTopUpSelectionSectionController : NSObject <PKDynamicSectionController> {
    NSDecimalNumber *_originalAmount;
    NSDecimalNumber *_originalThreshold;
    NSString *_currentPaymentMethodName;
    NSString *_originalPaymentMethodName;
    NSString *_currentPaymentMethodIdentifier;
    NSString *_originalPaymentMethodIdentifier;
    NSArray *_amountSuggestions;
    NSArray *_thresholdSuggestions;
    NSString *_currencyCode;
    BOOL _amountIsExpanded;
    BOOL _thresholdIsExpanded;
    long long _viewStyle;
    id<PKThresholdTopUpSelectionSectionControllerDelegate> _delegate;
}

@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL editing;
@property (retain, nonatomic) NSString *amountTitle;
@property (retain, nonatomic) NSString *thresholdTitle;
@property (retain, nonatomic) NSString *paymentMethodTitle;
@property (readonly, nonatomic) NSDecimalNumber *currentAmount;
@property (readonly, nonatomic) NSDecimalNumber *currentThreshold;
@property (readonly, nonatomic) BOOL valuesEdited;
@property (readonly, nonatomic) NSArray *identifiers;
@property (retain, nonatomic) UICollectionViewCellRegistration *cellRegistration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)didSelectItem:(id)a0;
- (id)_buttonAccessoryForItem:(id)a0;
- (void)applyUpdate;
- (id)cellRegistrationForItem:(id)a0;
- (id)initWithAmountSuggestions:(id)a0 selectedAmount:(id)a1 thresholdSuggestions:(id)a2 selectedThreshold:(id)a3 currencyCode:(id)a4 paymentMethodName:(id)a5 paymentMethodIdentifier:(id)a6 viewStyle:(long long)a7 delegate:(id)a8;
- (id)layoutWithLayoutEnvironment:(id)a0 sectionIdentifier:(id)a1;
- (BOOL)shouldHighlightItem:(id)a0;
- (id)snapshotWithPreviousSnapshot:(id)a0 forSectionIdentifier:(id)a1;
- (void)updatePaymentMethod:(id)a0;

@end
