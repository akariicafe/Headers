@class NSSet, NSMutableArray;

@interface SGMicrodataItem : SGMicrodataItemScope

@property (readonly, nonatomic) NSSet *itemType;
@property (readonly, nonatomic) NSMutableArray *itemRef;

- (void).cxx_destruct;
- (id)initWithItemType:(id)a0 itemRef:(id)a1;
- (void)resolveItemRefsWithDocument:(id)a0;

@end
