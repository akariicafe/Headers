@interface CPMLBestShim : NSObject

+ (id)bestShim;
+ (id)bestShimWithDBPath:(id)a0 withModelPath:(id)a1 withPListPath:(id)a2;

- (void)feedback:(id)a0 withItemsVisited:(id)a1;
- (id)rankItems:(id)a0 withMetaInfo:(id)a1 withNumOfRankItem:(unsigned long long)a2;

@end
