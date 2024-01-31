@class HUQuickControlCollectionViewGridLayoutRowInfo, HUQuickControlCollectionGridLayoutSettings, NSArray;

@interface HUQuickControlCollectionViewGridLayoutDetails : NSObject

@property (retain, nonatomic) HUQuickControlCollectionGridLayoutSettings *settings;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentFrame;
@property (nonatomic) unsigned long long sectionIndex;
@property (retain, nonatomic) HUQuickControlCollectionViewGridLayoutRowInfo *sectionHeaderLayout;
@property (copy, nonatomic) NSArray *rowLayouts;

- (void).cxx_destruct;
- (id)indexPathForRow:(unsigned long long)a0 column:(unsigned long long)a1;
- (id)indexPathForSectionHeader;
- (unsigned long long)numberOfColumnsInRow:(unsigned long long)a0;

@end
