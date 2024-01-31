@class NSString;

@interface OFUIGridViewItem : NSObject <OFUIWindowDraggingPasteboard>

@property (retain, nonatomic) id object;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)itemWithPasteboardItem:(id)a0;
+ (id)objectForPasteboadItem:(id)a0;

- (id)init;
- (void)dealloc;
- (id)pasteboardItem;

@end
