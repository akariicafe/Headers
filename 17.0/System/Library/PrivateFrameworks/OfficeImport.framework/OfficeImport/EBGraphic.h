@interface EBGraphic : NSObject

+ (void)readImage:(id)a0 xlGraphicsInfo:(void *)a1 state:(id)a2;
+ (int)objectTypeForShape:(id)a0;
+ (void)readChart:(id)a0 chartIndex:(short)a1 state:(id)a2;
+ (id)readGraphicWithDictionary:(id)a0 state:(id)a1;
+ (void)readGraphicsInChart:(id)a0 state:(id)a1;
+ (void)readGraphicsWithState:(id)a0;
+ (id)readMainChartWithState:(id)a0;
+ (void)readNotesWithDictionary:(id)a0 state:(id)a1;
+ (void)readOle:(id)a0 xlGraphicsInfo:(void *)a1 state:(id)a2;

@end
