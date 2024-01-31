@class NSString, PHCollection;

@interface PXNavigationListItem : NSObject <PXNavigationListItem>

@property (nonatomic) unsigned long long lockState;
@property (readonly, nonatomic) long long itemCount;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *accessoryTitle;
@property (readonly, nonatomic) NSString *glyphImageName;
@property (readonly, nonatomic) NSString *accessoryGlyphImageName;
@property (readonly, nonatomic, getter=isDraggable) BOOL draggable;
@property (readonly, nonatomic, getter=isReorderable) BOOL reorderable;
@property (readonly, nonatomic, getter=isRemovable) BOOL removable;
@property (readonly, nonatomic, getter=isRenamable) BOOL renamable;
@property (readonly, nonatomic, getter=isDeletable) BOOL deletable;
@property (readonly, nonatomic, getter=isExpandable) BOOL expandable;
@property (readonly, nonatomic, getter=isGroup) BOOL group;
@property (readonly, nonatomic, getter=isExpanded) BOOL expanded;
@property (readonly, nonatomic) long long indentationLevel;
@property (readonly, nonatomic) PHCollection *collection;
@property (readonly, nonatomic) id representedObject;
@property (readonly, nonatomic) long long style;
@property (copy, nonatomic) NSString *badgeString;
@property (readonly, nonatomic) NSString *visualDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(id)a0 title:(id)a1;
- (id)initWithIdentifier:(id)a0 title:(id)a1 itemCount:(long long)a2;
- (BOOL)isEqualToNavigationListItem:(id)a0;

@end
