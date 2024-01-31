@class NSNumber, NSString;

@interface WFBatteryLevelTriggerConfigurationViewController : WFTriggerConfigurationViewController <WFTriggerPercentageSliderCellDelegate, UITableViewDataSource, UITableViewDelegate>

@property (readonly, nonatomic) NSNumber *parameterSectionIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void).cxx_destruct;
- (id)infoForSection:(long long)a0;
- (id)customSections;
- (void)disableRowVisibilityFor:(id)a0;
- (void)enableRowVisibilityFor:(id)a0;
- (id)initWithTrigger:(id)a0 mode:(unsigned long long)a1;
- (id)localizedTextForCellAtIndexPath:(id)a0 value:(double)a1;
- (void)sliderValueChangedToValue:(double)a0;
- (id)tableViewCellClasses;
- (void)updateCellLabelsWithValue:(double)a0;

@end
