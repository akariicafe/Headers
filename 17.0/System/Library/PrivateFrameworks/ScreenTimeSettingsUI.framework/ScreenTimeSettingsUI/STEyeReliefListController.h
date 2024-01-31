@class PSSpecifier;

@interface STEyeReliefListController : STPINListViewController

@property (retain, nonatomic) PSSpecifier *enableScreenDistanceSpecifier;

- (id)init;
- (void)dealloc;
- (id)specifiers;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)setCoordinator:(id)a0;
- (id)_checkScreenDistanceState:(id)a0;
- (id)_createEnableScreenDistanceGroupSpecifier;
- (id)_createEnableScreenDistanceSpecifer;
- (BOOL)_isScreenDistanceEnabled;
- (void)_setScreenDistance:(BOOL)a0;
- (void)_setScreenDistance:(id)a0 specifier:(id)a1;

@end
