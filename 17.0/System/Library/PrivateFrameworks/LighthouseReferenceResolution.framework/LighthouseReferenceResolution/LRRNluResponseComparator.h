@interface LRRNluResponseComparator : NSObject

- (BOOL)compare:(id)a0 response2:(id)a1;
- (BOOL)compareParses:(id)a0 parse2:(id)a1;
- (BOOL)compareParsesWithProb:(id)a0 parse2:(id)a1;
- (BOOL)compareProbability:(double)a0 probability2:(double)a1;
- (BOOL)compareUserDialogActs:(id)a0 uda2:(id)a1;
- (BOOL)compareUsoGraphs:(id)a0 graph2:(id)a1;

@end
