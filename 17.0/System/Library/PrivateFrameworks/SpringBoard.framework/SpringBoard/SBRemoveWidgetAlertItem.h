@class NSString, SBHIconManager, SBWidgetIcon;
@protocol SBLeafIconDataSource;

@interface SBRemoveWidgetAlertItem : SBAlertItem

@property (retain, nonatomic) id<SBLeafIconDataSource> widget;
@property (retain, nonatomic) SBWidgetIcon *icon;
@property (retain, nonatomic) NSString *iconLocation;
@property (weak, nonatomic) SBHIconManager *iconManager;

- (void).cxx_destruct;
- (BOOL)dismissOnLock;
- (void)configure:(BOOL)a0 requirePasscodeForActions:(BOOL)a1;
- (void)didActivate;
- (BOOL)forcesModalAlertAppearance;
- (id)initWithWidget:(id)a0 inIcon:(id)a1 location:(id)a2 iconManager:(id)a3;
- (id)initWithWidgetIcon:(id)a0 location:(id)a1 iconManager:(id)a2;
- (BOOL)shouldShowInLockScreen;

@end
