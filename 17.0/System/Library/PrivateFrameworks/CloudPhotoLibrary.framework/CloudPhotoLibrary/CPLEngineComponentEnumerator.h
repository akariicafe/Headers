@class NSEnumerator;

@interface CPLEngineComponentEnumerator : NSObject {
    NSEnumerator *_enumerator;
    id /* block */ _handler;
}

- (void).cxx_destruct;
- (void)handleNextComponent;
- (id)initWithComponents:(id)a0 handler:(id /* block */)a1;

@end
