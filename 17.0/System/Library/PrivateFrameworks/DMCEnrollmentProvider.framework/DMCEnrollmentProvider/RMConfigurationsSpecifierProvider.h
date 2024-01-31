@class NSMutableArray;
@protocol RMConfigurationsDataProvider;

@interface RMConfigurationsSpecifierProvider : DMCSpecifierProvider

@property (retain, nonatomic) id<RMConfigurationsDataProvider> rmDataProvider;
@property (retain, nonatomic) NSMutableArray *sectionTitles;
@property (retain, nonatomic) NSMutableArray *sectionedSpecifiers;

- (id)_isActivatedProfileText:(id)a0;
- (id)specifiersReloadedNotificationName;
- (id)specifiers;
- (id)_profileSpecifiers;
- (id)_iconForSymbol:(short)a0;
- (id)tableSectionCellsForSpecifiersInTableView:(id)a0;
- (void).cxx_destruct;
- (id)initWithAccount:(id)a0 rmDataProvider:(id)a1;
- (id)_passcodeSpecifiers;
- (id)_pluginSpecifiers;

@end
