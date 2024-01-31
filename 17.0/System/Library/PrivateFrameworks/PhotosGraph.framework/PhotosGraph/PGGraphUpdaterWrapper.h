@class PGGraphUpdater;

@interface PGGraphUpdaterWrapper : NSObject {
    PGGraphUpdater *_graphUpdater;
}

- (id)initWithGraphManager:(id)a0;
- (void).cxx_destruct;
- (void)applyChangesFromGraphUpdate:(id)a0 progressReporter:(id)a1 completionHandler:(id /* block */)a2;

@end
