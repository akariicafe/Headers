@class SUUIStorePageSplit;

@interface SUUIStorePageSplitsDescription : NSObject <NSCopying>

@property (copy, nonatomic) SUUIStorePageSplit *bottomSplit;
@property (copy, nonatomic) SUUIStorePageSplit *leftSplit;
@property (copy, nonatomic) SUUIStorePageSplit *rightSplit;
@property (copy, nonatomic) SUUIStorePageSplit *topSplit;
@property (readonly, nonatomic) SUUIStorePageSplit *firstSplit;
@property (readonly, nonatomic) long long numberOfSplits;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)enumerateSplitsUsingBlock:(id /* block */)a0;
- (void)sizeSplitsToFitWidth:(double)a0 usingBlock:(id /* block */)a1;

@end
