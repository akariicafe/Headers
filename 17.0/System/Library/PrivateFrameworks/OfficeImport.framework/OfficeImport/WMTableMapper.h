@class WMTableColumnInfo, WMBordersProperty, WMTableStyle, WDTable;

@interface WMTableMapper : CMMapper {
    WDTable *mWdTable;
    WMBordersProperty *mInsideBorders;
    WMTableStyle *mStyle;
    WMTableColumnInfo *mColumnInfo;
}

+ (BOOL)isTableDeleted:(id)a0;

- (void).cxx_destruct;
- (id)columnInfo;
- (id)copyColumnInfo;
- (id)copyStopArrayForRow:(unsigned long long)a0;
- (id)initWithWDTable:(id)a0 parent:(id)a1;
- (id)insideBorders;
- (void)mapAt:(id)a0 withState:(id)a1;
- (void)setInsideBorders:(id)a0;

@end
