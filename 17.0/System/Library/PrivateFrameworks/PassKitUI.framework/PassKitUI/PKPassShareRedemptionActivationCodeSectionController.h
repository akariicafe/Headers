@class NSString, PKPassShareActivationOptions;
@protocol PKPassShareRedemptionActivationCodeSectionControllerDelegate;

@interface PKPassShareRedemptionActivationCodeSectionController : PKPassShareSectionController <PKTextFieldCollectionViewListCellDelegate> {
    unsigned long long _mode;
    id<PKPassShareRedemptionActivationCodeSectionControllerDelegate> _delegate;
}

@property (retain, nonatomic) PKPassShareActivationOptions *activationOptions;
@property (readonly, nonatomic) BOOL requiresActivationCode;
@property (readonly, nonatomic) NSString *enteredActivationCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)_endEditing;
- (void)didSelectItem:(id)a0;
- (void)decorateListCell:(id)a0 forRowItem:(id)a1;
- (id)initWithMode:(unsigned long long)a0 delegate:(id)a1;
- (void)reloadItemsAnimated:(BOOL)a0;
- (void)textFieldDidBeginEditing:(id)a0 forListCell:(id)a1;
- (BOOL)textFieldShouldReturn:(id)a0 forListCell:(id)a1;

@end
