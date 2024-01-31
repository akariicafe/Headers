@interface ODICycle2 : ODICycle

+ (BOOL)map1NodeWithState:(id)a0;
+ (BOOL)map2NodeWithState:(id)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })mapGSpaceWithState:(id)a0;
+ (void)mapNode:(id)a0 index:(unsigned int)a1 state:(id)a2;
+ (void)mapTransition:(id)a0 index:(unsigned int)a1 state:(id)a2;
+ (float)nodeRadiusWithState:(id)a0;
+ (struct CGSize { double x0; double x1; })nodeSizeWithState:(id)a0;

@end
