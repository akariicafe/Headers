@class NSOrderedSet;

@interface CDMListGraphsResponseCommand : CDMBaseCommand

@property (readonly, nonatomic) NSOrderedSet *availableServiceGraphs;

- (void).cxx_destruct;
- (id)initWithGraphs:(id)a0;

@end
