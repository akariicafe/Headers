@protocol WFVariableProvider;

@interface WorkflowEditor.QuantityFieldParameterSummaryEditor : WFModuleSummaryEditor {
    void /* unknown type, empty encoding */ autocompleteDataSource;
    void /* unknown type, empty encoding */ hasStagedChanges;
    void /* unknown type, empty encoding */ isPickingActionOutput;
    void /* unknown type, empty encoding */ autocompleteCoordinator;
}

@property (nonatomic, retain) id<WFVariableProvider> variableProvider;

+ (unsigned long long)variableResultTypeForParameter:(id)a0;

- (void).cxx_destruct;
- (void)beginEditingSlotWithIdentifier:(id)a0 presentationAnchor:(id)a1;
- (void)cancelEditingWithCompletionHandler:(void (^)(void))a0;
- (id)initWithParameter:(id)a0 arrayIndex:(long long)a1 processing:(BOOL)a2;
- (id)clearButtonMenuItemForSlotWithIdentifier:(id)a0;
- (id)customMenuElementsForSlotWithIdentifier:(id)a0 style:(unsigned long long)a1;
- (void)stageState:(id)a0;
- (id)stateByReplacingVariableFromCurrentState:(id)a0 withVariable:(id)a1;
- (void)textEntryDidFinish;
- (BOOL)textEntryShouldChangeText:(id)a0;
- (void)textEntryTextDidChange:(id)a0;
- (void)textEntryWillBegin:(id)a0 allowMultipleLines:(BOOL *)a1;
- (BOOL)variableMenuSupportsVariableSelectionForSlotWithIdentifier:(id)a0;

@end
