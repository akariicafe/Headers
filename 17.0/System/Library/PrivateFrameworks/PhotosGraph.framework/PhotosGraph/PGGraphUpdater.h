@class MAProgressReporter, NSError, PGGraphUpdate;

@interface PGGraphUpdater : NSObject {
    void /* unknown type, empty encoding */ graphManager;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWith:(id)a0;
- (void)applyChangesFrom:(PGGraphUpdate *)a0 progressReporter:(MAProgressReporter *)a1 completionHandler:(void (^)(NSError *))a2;

@end
