@class NSMutableArray, SUUISettingsGroupDescription;
@protocol SUUISettingsGroupControllerDelegate;

@interface SUUISettingsGroupController : NSObject

@property (weak, nonatomic) id<SUUISettingsGroupControllerDelegate> delegate;
@property (retain, nonatomic) NSMutableArray *settingDescriptions;
@property (retain, nonatomic) SUUISettingsGroupDescription *settingsGroupDescription;

- (void).cxx_destruct;
- (void)_reloadSettingDescription:(id)a0;
- (id)_viewForSettingDescription:(id)a0;
- (void)attachSettingDescription:(id)a0;

@end
