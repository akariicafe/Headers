@interface SUUIPlaceholderIndexBarEntry : SUUIIndexBarEntry

@property (readonly, nonatomic) struct CGSize { double width; double height; } placeholderSize;

- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (struct CGSize { double x0; double x1; })_calculatedContentSize;
- (id)initWithPlaceholderSize:(struct CGSize { double x0; double x1; })a0;

@end
