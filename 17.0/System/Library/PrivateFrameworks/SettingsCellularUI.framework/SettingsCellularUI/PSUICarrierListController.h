@class PSUIAddOnPlanGroup, PSSpecifier, PSUICarrierItemGroup, UIBarButtonItem;

@interface PSUICarrierListController : PSListController {
    PSSpecifier *_carrierItemGroupSpecifier;
    PSSpecifier *_addOnGroupSpecifier;
}

@property (retain, nonatomic) UIBarButtonItem *cancelButton;
@property (retain, nonatomic) PSUICarrierItemGroup *carrierItemGroup;
@property (retain, nonatomic) PSUIAddOnPlanGroup *addOnPlanGroup;

- (void)dismiss;
- (id)init;
- (void)loadView;
- (id)specifiers;
- (void).cxx_destruct;
- (void)addCancelButton;
- (id)createCarrierItemGroupIfNeeded:(id)a0;
- (id)addOnGroupSpecifier;
- (id)carrierItemGroupSpecifier;
- (void)cellularPlanChanged:(id)a0;
- (id)createAddCellularPlanSpecifierIfNeeded:(id)a0;

@end
