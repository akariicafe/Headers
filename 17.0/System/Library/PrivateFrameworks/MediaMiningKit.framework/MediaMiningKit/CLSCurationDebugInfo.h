@class NSString, NSMapTable, CLSCurationDebugCluster;

@interface CLSCurationDebugInfo : NSObject {
    CLSCurationDebugCluster *_rootCluster;
    NSMapTable *_debugItemByItem;
    NSMapTable *_debugClusterByCluster;
}

@property (copy, nonatomic) NSString *agent;
@property (copy, nonatomic) NSString *stage;

- (id)initWithItems:(id)a0;
- (void).cxx_destruct;
- (void)resetWithReason:(id)a0;
- (void)chooseItems:(id)a0 inItems:(id)a1 withReason:(id)a2;
- (void)addClusters:(id)a0 withReason:(id)a1;
- (void)chooseItem:(id)a0 inItems:(id)a1 withReason:(id)a2;
- (id)debugInfoForCluster:(id)a0;
- (void)dedupItems:(id)a0 toItem:(id)a1 withDedupingType:(unsigned long long)a2;
- (void)dedupItems:(id)a0 toItems:(id)a1 withDedupingType:(unsigned long long)a2;
- (void)dedupItems:(id)a0 toRequiredItems:(id)a1 withDedupingType:(unsigned long long)a2;
- (id)dictionaryRepresentationWithAppendExtraItemInfoBlock:(id /* block */)a0;
- (void)forceState:(unsigned long long)a0 ofItem:(id)a1 withReason:(id)a2;
- (void)setClusters:(id)a0 withReason:(id)a1;
- (void)setState:(unsigned long long)a0 ofCluster:(id)a1 withReason:(id)a2;
- (void)setState:(unsigned long long)a0 ofItem:(id)a1 withReason:(id)a2;
- (void)setState:(unsigned long long)a0 ofItems:(id)a1 withReason:(id)a2;
- (void)endTentativeSectionWithSuccess:(BOOL)a0;
- (void)_dedupItems:(id)a0 toItems:(id)a1 chosenState:(unsigned long long)a2 withDedupingType:(unsigned long long)a3;
- (void)beginTentativeSection;
- (void)chooseItem:(id)a0 inCluster:(id)a1 withReason:(id)a2;
- (void)chooseItems:(id)a0 inCluster:(id)a1 withReason:(id)a2;
- (id)debugClusterForCluster:(id)a0;
- (id)debugItemForItem:(id)a0;
- (id)debugItemsForItems:(id)a0;
- (id)initWithDebugCluster:(id)a0;
- (void)requireItems:(id)a0 inCluster:(id)a1;
- (void)requireItems:(id)a0 inItems:(id)a1;
- (void)setUnclusteredItemsState:(unsigned long long)a0 withReason:(id)a1;

@end
