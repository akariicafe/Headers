@class UIColor, NSArray, SKUIStorePageSectionContext;

@interface SKUIStorePageSplit : NSObject <NSCopying>

@property (copy, nonatomic) UIColor *dividerColor;
@property (nonatomic) long long numberOfPageSections;
@property (copy, nonatomic) NSArray *pageComponents;
@property (retain, nonatomic) SKUIStorePageSectionContext *sectionContext;
@property (nonatomic) double widthFraction;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
