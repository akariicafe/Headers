@class PGGraphMomentNodeCollection, PGGraphMeaningNodeCollection;

@interface PGGraphAlternativeMeaningEdgeCollection : PGGraphEdgeCollection

@property (readonly) PGGraphMomentNodeCollection *momentNodes;
@property (readonly) PGGraphMeaningNodeCollection *meaningNodes;

+ (Class)edgeClass;
+ (id)meaningEdgesWithConfidenceThreshold:(double)a0 inGraph:(id)a1;

@end
