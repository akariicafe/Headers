@class NSMutableArray, NSUserDefaults;
@protocol PXSettingsConfigurationsSourceObserver;

@interface PXSettingsConfigurationsSource : NSObject <PXSettingsConfigurationsMutableSource>

@property (readonly, nonatomic) NSMutableArray *configurations;
@property (readonly, nonatomic) NSUserDefaults *userDefaults;
@property (readonly, nonatomic) long long numberOfConfigurations;
@property (weak, nonatomic) id<PXSettingsConfigurationsSourceObserver> observer;

- (id)initWithUserDefaults:(id)a0;
- (void)performChanges:(id /* block */)a0;
- (id)init;
- (void)_save;
- (void).cxx_destruct;
- (id)configurationAtIndex:(long long)a0;
- (void)deleteAllConfigurations;
- (void)deleteConfigurationAtIndex:(long long)a0;
- (long long)indexOfConfiguration:(id)a0;
- (void)insertConfiguration:(id)a0 atIndex:(long long)a1;
- (void)insertConfigurations:(id)a0 atIndex:(long long)a1;
- (void)renameConfigurationAtIndex:(long long)a0 withName:(id)a1;
- (void)updateConfigurationAtIndex:(long long)a0;

@end
