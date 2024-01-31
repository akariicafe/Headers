@class _TtC20IntelligencePlatform12KnosisServer;

@interface GDKnosisServer : NSObject {
    _TtC20IntelligencePlatform12KnosisServer *_knosisServer;
}

- (void).cxx_destruct;
- (void)executeIntent:(id)a0 completionHandler:(id /* block */)a1;
- (void)executeIntent:(id)a0 completionHandlerWithGraphObjectContext:(id /* block */)a1;
- (void)executeKGQ:(id)a0 completionHandler:(id /* block */)a1;
- (void)executeKGQ:(id)a0 completionHandlerWithGraphObjectContext:(id /* block */)a1;
- (id)initWithEntitySubgraphView;

@end
