@interface WBTableRow : NSObject

+ (void)readFrom:(id)a0 textRuns:(id)a1 to:(id)a2 index:(unsigned long long)a3 row:(id)a4;
+ (void)collectCellProperties:(void *)a0 tracked:(void *)a1 for:(id)a2;
+ (void)readCellsFrom:(id)a0 textRuns:(id)a1 level:(int)a2 to:(id)a3 properties:(void *)a4 tracked:(void *)a5;

@end
