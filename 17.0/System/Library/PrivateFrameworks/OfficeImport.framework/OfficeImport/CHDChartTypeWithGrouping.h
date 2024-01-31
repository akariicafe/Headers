@interface CHDChartTypeWithGrouping : CHDChartType {
    int mGrouping;
}

- (void)setGrouping:(int)a0;
- (int)grouping;
- (id)chdGroupingString;
- (id)initWithChart:(id)a0;
- (BOOL)isGroupingStacked;

@end
