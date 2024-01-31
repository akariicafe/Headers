@class MABaseGraph;
@protocol MAGraphProxy;

@interface MAGraphReference : NSObject {
    unsigned long long _hash;
}

@property (readonly, weak) id<MAGraphProxy> graph;
@property (readonly, weak) MABaseGraph *concreteGraph;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithGraph:(id)a0;

@end
