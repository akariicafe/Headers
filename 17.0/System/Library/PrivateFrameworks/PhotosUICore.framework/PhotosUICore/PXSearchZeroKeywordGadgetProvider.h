@class PXSearchZeroKeywordDataSource;

@interface PXSearchZeroKeywordGadgetProvider : PXGadgetProvider

@property (readonly, nonatomic) PXSearchZeroKeywordDataSource *zeroKeywordDataSource;
@property (readonly, nonatomic) long long sectionType;

- (unsigned long long)estimatedNumberOfGadgets;
- (void)generateGadgets;
- (void).cxx_destruct;
- (id)initWithZeroKeywordDataSource:(id)a0 sectionType:(long long)a1;
- (id)visibleIndexPaths;

@end
