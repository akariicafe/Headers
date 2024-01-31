@interface _UIEditMenuListPage : NSObject

@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (readonly, nonatomic) double width;

- (id)description;
- (void)appendItemWithWidth:(double)a0;
- (void)enforceMinimumWidth:(double)a0;
- (id)initWithStartIndex:(long long)a0;
- (void)prependItemWithWidth:(double)a0;
- (void)removeLastItemWithWidth:(double)a0;

@end
