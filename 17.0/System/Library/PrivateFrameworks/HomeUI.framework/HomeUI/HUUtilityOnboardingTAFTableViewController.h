@class NSArray, NSMutableDictionary;
@protocol TAFTableDelegate;

@interface HUUtilityOnboardingTAFTableViewController : HUItemTableViewController

@property (retain, nonatomic) NSMutableDictionary *tableResponses;
@property (retain, nonatomic) NSArray *tafFields;
@property (weak, nonatomic) id<TAFTableDelegate> delegate;

- (void).cxx_destruct;
- (BOOL)_characterCountValidationForText:(id)a0 min:(unsigned long long)a1 max:(unsigned long long)a2;
- (BOOL)_regexValidation:(id)a0 forText:(id)a1;
- (BOOL)_validateText:(id)a0 forItemKey:(id)a1;
- (Class)cellClassForItem:(id)a0 indexPath:(id)a1;
- (id)initWithTAFfields:(id)a0 tafResponses:(id)a1 withItemManager:(id)a2 tableViewStyle:(long long)a3;
- (id)retrieveCompletedFields;
- (BOOL)shouldManageTextFieldForItem:(id)a0;
- (void)textDidChange:(id)a0 forTextField:(id)a1 item:(id)a2;
- (void)textFieldDidEndEditing:(id)a0 item:(id)a1;
- (void)updateCell:(id)a0 forItem:(id)a1 indexPath:(id)a2 animated:(BOOL)a3;

@end
