@class NSString, ICASChecklistAction, ICASMoveCheckedItemsToBottomSwitchSetting;

@interface ICASChecklistUsageData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) ICASChecklistAction *checklistAction;
@property (readonly, nonatomic) ICASMoveCheckedItemsToBottomSwitchSetting *moveCheckedItemsToBottomSwitchSetting;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithChecklistAction:(id)a0 moveCheckedItemsToBottomSwitchSetting:(id)a1;

@end
