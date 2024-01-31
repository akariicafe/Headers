@class CPParagraphListItem;

@interface CPList : NSObject <CPDisposable> {
    struct __CFArray { } *items;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } spacer;
@property (nonatomic) int type;
@property (nonatomic) unsigned int ordinalPrefixLength;
@property (nonatomic) unsigned int ordinalSuffixLength;
@property (retain, nonatomic) CPParagraphListItem *parentItem;

- (unsigned int)itemCount;
- (id)itemAtIndex:(unsigned int)a0;
- (id)init;
- (void)dealloc;
- (void)dispose;
- (void)addItem:(id)a0;
- (void)finalize;
- (BOOL)containsParagraph:(id)a0;
- (BOOL)isMultilevel;

@end
