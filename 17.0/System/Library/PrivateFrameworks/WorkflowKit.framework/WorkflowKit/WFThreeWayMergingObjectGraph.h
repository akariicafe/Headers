@class NSMapTable, NSMutableOrderedSet;

@interface WFThreeWayMergingObjectGraph : NSObject {
    id /* block */ _vertexComparator;
    NSMutableOrderedSet *_orderedVertexes;
    NSMapTable *_directSuccessorsForVertexes;
    NSMapTable *_directPredecessorsForVertexes;
}

- (id)description;
- (void).cxx_destruct;

@end
