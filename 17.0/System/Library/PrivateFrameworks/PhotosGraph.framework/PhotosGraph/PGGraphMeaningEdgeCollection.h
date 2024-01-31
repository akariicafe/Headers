@class PGGraphMomentNodeCollection, PGGraphMeaningNodeCollection;

@interface PGGraphMeaningEdgeCollection : PGGraphEdgeCollection

@property (readonly) PGGraphMomentNodeCollection *momentNodes;
@property (readonly) PGGraphMeaningNodeCollection *meaningNodes;

+ (Class)edgeClass;
+ (id)meaningEdgesWithConfidenceThreshold:(double)a0 inGraph:(id)a1;

@end
