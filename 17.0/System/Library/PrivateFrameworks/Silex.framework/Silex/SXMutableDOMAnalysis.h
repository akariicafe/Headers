@class SXMutableConditionalObjectAnalysis, SXMutableNamespacedObjectReferences;

@interface SXMutableDOMAnalysis : SXDOMAnalysis

@property (copy, nonatomic) SXMutableConditionalObjectAnalysis *conditionalObjectAnalysis;
@property (readonly, copy, nonatomic) SXMutableNamespacedObjectReferences *namespacedObjectReferences;

- (void)removeComponent:(id)a0;
- (void)removeComponentStyle:(id)a0 component:(id)a1;
- (void)addComponent:(id)a0 parent:(id)a1;
- (void)addComponent:(id)a0 type:(id)a1 role:(int)a2;
- (void)addComponentStyle:(id)a0 component:(id)a1;
- (void)addComponentTextStyle:(id)a0 component:(id)a1;
- (void)addTextStyle:(id)a0 component:(id)a1;
- (void)removeComponentTextStyle:(id)a0 component:(id)a1;
- (void)removeTextStyle:(id)a0 component:(id)a1;

@end
