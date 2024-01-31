@class NSMutableSet, MABaseGraph;

@interface MAMemoryFootprint : NSObject {
    MABaseGraph *_graph;
    NSMutableSet *_allKeys;
    NSMutableSet *_allValues;
    unsigned long long _halfEdgeCount;
    unsigned long long _orderedSetCount;
    unsigned long long _arrayCount;
    unsigned long long _dictionaryCount;
    unsigned long long _basicHashCount;
    unsigned long long _basicHashValueStoreCount;
}

@property (readonly, nonatomic) unsigned long long totalSize;
@property (readonly, nonatomic) unsigned long long graphSize;
@property (readonly, nonatomic) unsigned long long nodeCount;
@property (readonly, nonatomic) unsigned long long allNodesSize;
@property (readonly, nonatomic) unsigned long long averageNodeSize;
@property (readonly, nonatomic) float averageEdgeCountPerNode;
@property (readonly, nonatomic) unsigned long long maximumEdgeCountInNode;
@property (readonly, nonatomic) unsigned long long countOfNodesWithAtMostEightEdges;
@property (readonly, nonatomic) unsigned long long edgeCount;
@property (readonly, nonatomic) unsigned long long allEdgesSize;
@property (readonly, nonatomic) unsigned long long averageEdgeSize;
@property (readonly, nonatomic) unsigned long long actualKeyCount;
@property (readonly, nonatomic) unsigned long long actualValueCount;
@property (readonly, nonatomic) unsigned long long optimalKeyCount;
@property (readonly, nonatomic) unsigned long long optimalValueCount;
@property (readonly, nonatomic) unsigned long long actualKeysSize;
@property (readonly, nonatomic) unsigned long long actualValuesSize;
@property (readonly, nonatomic) unsigned long long optimalKeysSize;
@property (readonly, nonatomic) unsigned long long optimalValuesSize;

- (void)dump;
- (void)update;
- (unsigned long long)version;
- (void).cxx_destruct;
- (id)initWithGraph:(id)a0;
- (void)_reportNode:(id)a0 withSize:(unsigned long long)a1 edgeCount:(unsigned long long)a2;
- (unsigned long long)_reportArray:(id)a0;
- (unsigned long long)_reportDictionary:(id)a0;
- (void)_reportEdge:(id)a0 withSize:(unsigned long long)a1;
- (void)_reportGraph:(id)a0 withSize:(unsigned long long)a1;
- (void)_reportKey:(id)a0;
- (unsigned long long)_reportOrderedSet:(id)a0;
- (void)_reportValue:(id)a0;

@end
