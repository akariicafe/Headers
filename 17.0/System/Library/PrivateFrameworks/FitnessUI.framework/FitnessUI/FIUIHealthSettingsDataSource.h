@class FIUIHealthSettingsBirthDatePickerController, FIUIHealthSettingsWeightPickerController, FIUIHealthSettingsSexPickerController, FIActivitySettingsController, NSString, FIUIHealthSettingsHeightPickerController, FIUIHealthSettingsTableViewCell;
@protocol FIUIHealthSettingsDataSourceDelegate;

@interface FIUIHealthSettingsDataSource : NSObject <UITableViewDataSource> {
    FIUIHealthSettingsTableViewCell *_birthDateCell;
    FIUIHealthSettingsTableViewCell *_biologicalSexCell;
    FIUIHealthSettingsTableViewCell *_heightCell;
    FIUIHealthSettingsTableViewCell *_weightCell;
    FIUIHealthSettingsTableViewCell *_wheelchairUseCell;
    FIActivitySettingsController *_preEditSettingsController;
    BOOL _showWheelchair;
}

@property (weak, nonatomic) id<FIUIHealthSettingsDataSourceDelegate> delegate;
@property (retain, nonatomic) FIActivitySettingsController *settingsController;
@property (retain, nonatomic) FIUIHealthSettingsBirthDatePickerController *birthDatePickerController;
@property (retain, nonatomic) FIUIHealthSettingsHeightPickerController *heightPickerController;
@property (retain, nonatomic) FIUIHealthSettingsWeightPickerController *weightPickerController;
@property (retain, nonatomic) FIUIHealthSettingsSexPickerController *sexPickerController;
@property (readonly, nonatomic) FIActivitySettingsController *editedSettingsController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (void)startEditing;
- (void)_updateCells;
- (void)_updateBiologicalSexCell;
- (void)_updateBirthDateCell;
- (void)_updateHeightCell;
- (void)_updateWeightCell;
- (id)biologicalSexCell;
- (id)birthDateCell;
- (void)cellDidBecomeFirstResponder:(id)a0;
- (void)cellDidResignFirstResponder:(id)a0;
- (void)endEditingAndDiscardChanges:(BOOL)a0;
- (id)heightCell;
- (id)initWithActivitySettingsController:(id)a0 showWheelchair:(BOOL)a1;
- (BOOL)shouldHighlightRowAtIndexPath:(id)a0;
- (id)weightCell;
- (void)wheelchairSwitchDidChange:(id)a0;
- (id)wheelchairUseCell;

@end
