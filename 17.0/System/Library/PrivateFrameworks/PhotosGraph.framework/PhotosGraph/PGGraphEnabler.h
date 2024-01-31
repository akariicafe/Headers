@class PGGraph;

@interface PGGraphEnabler : NSObject

@property (readonly) PGGraph *graph;

- (void).cxx_destruct;
- (id)initWithGraph:(id)a0;
- (BOOL)locationIsFrequent:(id)a0;
- (BOOL)locationIsNearMyHomeOrWork:(id)a0;

@end
