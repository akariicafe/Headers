@interface _TtCV14WorkflowEditor16TagFieldHostView11Coordinator : NSObject <WFVariableUIDelegate> {
    void /* unknown type, empty encoding */ hostView;
}

- (id)init;
- (void).cxx_destruct;
- (void)revealAction:(id)a0 preScrollHandler:(id /* block */)a1 goBackHandler:(id /* block */)a2 scrolledAwayHandler:(id /* block */)a3;
- (void)showActionOutputPickerAllowingShortcutInput:(BOOL)a0 variableProvider:(id)a1 completionHandler:(id /* block */)a2;
- (void)showParameterEditingHint:(id)a0;

@end
