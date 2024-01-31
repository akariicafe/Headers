@class HFTransformItem, NSArray, HFItem;

@interface HUTriggerTimeConditionEditorSectionModule : HUTriggerConditionEditorExpandingSectionModule

@property (retain, nonatomic) HFItem *anyTimeOptionItem;
@property (retain, nonatomic) HFTransformItem *onlyDayOptionItem;
@property (retain, nonatomic) HFTransformItem *onlyNightOptionItem;
@property (retain, nonatomic) HFTransformItem *specificTimesOptionItem;
@property (retain, nonatomic) HFTransformItem *customOptionItem;
@property (readonly, nonatomic) NSArray *optionItems;

- (void).cxx_destruct;
- (id)_conditionItemForType:(unsigned long long)a0;
- (id)_createConditionItemForType:(unsigned long long)a0;
- (id)buildConditionOptionItems;
- (id)conditionForOptionItem:(id)a0;
- (BOOL)conditionIsDisabled;
- (id)conditionTitle;
- (BOOL)doesOptionItemRequireInitialUserConfiguration:(id)a0;
- (id)noConditionSummaryTitle;
- (id)preferredConditionFromConditions:(id)a0;
- (id)selectOptionItemForCondition:(id)a0;

@end
