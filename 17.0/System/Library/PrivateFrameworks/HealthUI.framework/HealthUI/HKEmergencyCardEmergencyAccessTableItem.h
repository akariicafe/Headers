@class HKEmergencyCardEnabledTableItem, HKEmergencyCardShareInfoTableItem, UITableViewCell, HKEmergencyCardFooterTableItem;

@interface HKEmergencyCardEmergencyAccessTableItem : HKEmergencyCardGroupTableItem <HKMedicalIDEditorCellEditDelegate> {
    UITableViewCell *_lastDequeuedAddContactCell;
    HKEmergencyCardShareInfoTableItem *_shareInfoTableItem;
    HKEmergencyCardEnabledTableItem *_enabledTableItem;
    HKEmergencyCardFooterTableItem *_enabledFooterItem;
    HKEmergencyCardFooterTableItem *_shareInfoFooterItem;
}

@property (nonatomic) BOOL showsShowWhenLockedState;
@property (nonatomic) BOOL showsEmergencyAccessState;

- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })separatorInset;
- (void).cxx_destruct;
- (id)titleForHeader;
- (BOOL)hasPresentableData;
- (id)initInEditMode:(BOOL)a0 shouldShowLocked:(BOOL)a1 shouldShareInfo:(BOOL)a2;
- (void)medicalIDEditorCellDidChangeValue:(id)a0;
- (void)setIsSecondaryProfile:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndex:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndex:(long long)a1;
- (id)viewOnlyTitle;

@end
