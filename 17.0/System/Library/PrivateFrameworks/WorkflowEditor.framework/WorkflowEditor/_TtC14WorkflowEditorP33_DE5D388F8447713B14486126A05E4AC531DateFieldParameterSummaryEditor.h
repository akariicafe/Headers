@interface _TtC14WorkflowEditorP33_DE5D388F8447713B14486126A05E4AC531DateFieldParameterSummaryEditor : WorkflowEditor.TextInputParameterSummaryEditor <WFParameterEventObserver>

- (void)parameterAttributesDidChange:(id)a0;
- (id)initWithParameter:(id)a0 arrayIndex:(long long)a1 processing:(BOOL)a2;
- (void)textEntryDidFinish;
- (void)textEntryTextDidChange:(id)a0;
- (void)textEntryWillBegin:(id)a0 allowMultipleLines:(BOOL *)a1;

@end
