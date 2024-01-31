@class NSArray;

@interface SFUnifiedBarItemArrangement : NSObject

@property (readonly, nonatomic) BOOL allowsCenteringInlineContentView;
@property (readonly, copy, nonatomic) NSArray *leadingItems;
@property (readonly, copy, nonatomic) NSArray *trailingItems;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)enumerateAllItemsUsingBlock:(id /* block */)a0;
- (id)initWithLeadingItems:(id)a0 trailingItems:(id)a1;

@end
