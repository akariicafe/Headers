@interface EXChartsheet : NSObject

+ (id)edSheetWithState:(id)a0;
+ (BOOL)readDistinctSheetElementsFrom:(struct _xmlTextReader { } *)a0 state:(id)a1;
+ (void)readOtherSheetComponentsWithState:(id)a0;
+ (void)readTables:(id)a0;
+ (void)setupProcessors:(id)a0;

@end
