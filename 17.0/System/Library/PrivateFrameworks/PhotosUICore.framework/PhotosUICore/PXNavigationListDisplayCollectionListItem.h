@class NSString;
@protocol PXDisplayCollectionList;

@interface PXNavigationListDisplayCollectionListItem : PXNavigationListItem {
    BOOL _renamable;
    BOOL _deletable;
    BOOL _expandable;
    NSString *_glyphImageName;
    NSString *_accessoryGlyphImageName;
}

@property (nonatomic, getter=isDraggable) BOOL draggable;
@property (nonatomic, getter=isReorderable) BOOL reorderable;
@property (readonly, nonatomic) id<PXDisplayCollectionList> collection;
@property (nonatomic) long long indentationLevel;
@property (nonatomic, getter=isExpanded) BOOL expanded;

- (void).cxx_destruct;
- (BOOL)isExpandable;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isDeletable;
- (id)representedObject;
- (id)accessoryGlyphImageName;
- (id)glyphImageName;
- (id)initWithIdentifier:(id)a0 displayCollectionList:(id)a1 title:(id)a2 itemCount:(long long)a3;
- (BOOL)isRenamable;

@end
