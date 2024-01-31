@interface OABDrawing : NSObject

+ (id)readDrawablesFromDrawing:(id)a0 state:(id)a1;
+ (unsigned int)addShapeIdForObject:(id)a0;
+ (void)applyRulesFromSolverContainer:(id)a0 state:(id)a1;
+ (id)readBackgroundPropertiesFromDrawing:(id)a0 state:(id)a1;

@end
