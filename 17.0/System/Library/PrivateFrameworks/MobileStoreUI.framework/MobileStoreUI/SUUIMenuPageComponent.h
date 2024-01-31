@class SUUISegmentedControlViewElement, NSString, NSArray, NSMutableArray;

@interface SUUIMenuPageComponent : SUUIPageComponent {
    NSMutableArray *_childrenComponents;
    NSMutableArray *_sortURLStrings;
    NSMutableArray *_titles;
}

@property (readonly, nonatomic) SUUISegmentedControlViewElement *viewElement;
@property (readonly, nonatomic) long long menuStyle;
@property (readonly, nonatomic) NSString *menuTitle;
@property (readonly, nonatomic) float menuTitleFontSize;
@property (readonly, nonatomic) long long menuTitleFontWeight;
@property (readonly, nonatomic) long long defaultSelectedIndex;
@property (readonly, nonatomic) long long numberOfItems;
@property (readonly, nonatomic) NSArray *allTitles;
@property (readonly, nonatomic) NSString *titleForMoreItem;

- (void).cxx_destruct;
- (long long)componentType;
- (id)_componentWithContext:(id)a0;
- (void)_setChildComponents:(id)a0 forIndex:(long long)a1;
- (id)childComponentsForIndex:(long long)a0;
- (id)initWithCustomPageContext:(id)a0;
- (id)initWithRoomSortData:(id)a0;
- (id)initWithViewElement:(id)a0;
- (id)sortURLForIndex:(long long)a0;
- (id)titleForIndex:(long long)a0;

@end
