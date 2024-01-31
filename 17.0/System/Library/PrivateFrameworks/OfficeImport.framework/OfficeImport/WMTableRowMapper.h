@class WDTableRow;

@interface WMTableRowMapper : CMMapper {
    WDTableRow *mWdTableRow;
    double mHeight;
}

+ (BOOL)isTableRowDeleted:(id)a0;

- (double)height;
- (void).cxx_destruct;
- (id)initWithWDTableRow:(id)a0 parent:(id)a1;
- (void)mapAt:(id)a0 withState:(id)a1;
- (void)setRowProperties:(id)a0;

@end
