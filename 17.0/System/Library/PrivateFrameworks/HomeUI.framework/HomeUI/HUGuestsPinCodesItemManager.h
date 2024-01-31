@class HFPinCodeManager;

@interface HUGuestsPinCodesItemManager : HFItemManager

@property (retain, nonatomic) HFPinCodeManager *pinCodeManager;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (id)_buildItemModulesForHome:(id)a0;
- (void)_registerForExternalUpdates;
- (void)_unregisterForExternalUpdates;
- (id)initWithDelegate:(id)a0 sourceItem:(id)a1;
- (id)initWithPinCodeManager:(id)a0 delegate:(id)a1;

@end
