@interface SULoadMoreMediaCellConfiguration : SUItemCellConfiguration

@property (nonatomic) double previousCellHeight;

+ (double)rowHeightForContext:(id)a0 representedObject:(id)a1;

- (id)init;
- (id)colorForLabelAtIndex:(unsigned long long)a0 withModifiers:(unsigned long long)a1;
- (id)fontForLabelAtIndex:(unsigned long long)a0;
- (void)reloadImages;
- (void)reloadLayoutInformation;
- (void)reloadStrings;

@end
