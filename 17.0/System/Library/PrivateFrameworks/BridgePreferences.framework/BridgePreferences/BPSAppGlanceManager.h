@class PSListController;

@interface BPSAppGlanceManager : NSObject

@property (weak, nonatomic) PSListController *listControllerDelegate;

- (void).cxx_destruct;
- (void)loadSettings;
- (void)_logGlanceDescriptions;
- (id)glanceSpecifierForIdentifier:(id)a0;
- (void)setShowsGlance:(id)a0 forSpecifier:(id)a1;
- (id)showsGlance:(id)a0;

@end
