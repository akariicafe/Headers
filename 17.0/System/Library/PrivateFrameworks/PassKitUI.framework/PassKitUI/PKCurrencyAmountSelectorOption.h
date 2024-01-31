@class NSString, PKCurrencyAmount;

@interface PKCurrencyAmountSelectorOption : NSObject <PKSpendNotificationLimitViewControllerItem>

@property (readonly, nonatomic) PKCurrencyAmount *currencyAmount;
@property (readonly, nonatomic) NSString *displayValue;
@property (readonly, nonatomic) BOOL isCustomOption;
@property (readonly, nonatomic) BOOL selected;
@property (readonly, nonatomic) long long editingStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cellReuseIdentifier;

- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)shouldHighlight;
- (id)initWithCurrencyAmount:(id)a0 displayValue:(id)a1 customOption:(BOOL)a2 selected:(BOOL)a3;
- (id)tableViewCellForTableView:(id)a0 atIndexPath:(id)a1;

@end
