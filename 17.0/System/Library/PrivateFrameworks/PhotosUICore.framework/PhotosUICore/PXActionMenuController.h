@class NSArray, NSOrderedSet, NSSet, UIAlertController;

@interface PXActionMenuController : NSObject {
    BOOL _actionsNeedsUpdate;
}

@property (readonly, nonatomic) NSArray *availableActionTypes;
@property (readonly, nonatomic) NSArray *availableInternalActionTypes;
@property (readonly, nonatomic) NSArray *availableHeaderActionTypes;
@property (readonly, nonatomic) NSArray *actionManagers;
@property (readonly, nonatomic) BOOL enableSectionedMenus;
@property (readonly, nonatomic) long long numberOfSections;
@property (copy, nonatomic) NSOrderedSet *defaultActivityTypeOrder;
@property (copy, nonatomic) NSSet *disabledActionTypes;
@property (copy, nonatomic) NSSet *excludedActionTypes;
@property (readonly, nonatomic) NSArray *activityActions;
@property (readonly, nonatomic) UIAlertController *alertController;
@property (readonly, nonatomic) NSArray *actions;

- (id)init;
- (void).cxx_destruct;
- (id)titleForSection:(long long)a0;
- (id)iconForSection:(long long)a0;
- (id)_actionableActionManagerForActionType:(id)a0;
- (id)_menuElementsForSection:(long long)a0;
- (void)_updateActionsIfNeeded;
- (void)_updateActionsUsingActivityTypeOrder;
- (void)_updateSectionedActions;
- (id)availableActionTypesInSection:(long long)a0;
- (id)initWithActionManagers:(id)a0;
- (void)invalidateActions;
- (BOOL)sectionDisplaysInline:(long long)a0;
- (BOOL)shouldAllowPerformanceOfActionType:(id)a0;

@end
