@class NSSet;
@protocol HUServicePickerViewControllerDelegate;

@interface HUServicePickerViewController : HUSelectableServiceGridViewController

@property (weak, nonatomic) id<HUServicePickerViewControllerDelegate> delegate;
@property (nonatomic) BOOL isPresentedModally;
@property (retain, nonatomic) NSSet *preselectedServices;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)_done:(id)a0;
- (void)_cancel:(id)a0;
- (BOOL)_isItemPreselected:(id)a0;
- (BOOL)_preselectedServicesContainsService:(id)a0;
- (id)_servicesForItem:(id)a0;
- (id)_servicesForItems:(id)a0;
- (void)_setUpNavButtons;
- (id)initWithHome:(id)a0 isPresentedModally:(BOOL)a1 delegate:(id)a2;
- (id)initWithHome:(id)a0 selectedServices:(id)a1 isPresentedModally:(BOOL)a2 delegate:(id)a3;
- (void)itemManagerDidUpdate:(id)a0;
- (BOOL)serviceGridItemManager:(id)a0 shouldHideItem:(id)a1;

@end
