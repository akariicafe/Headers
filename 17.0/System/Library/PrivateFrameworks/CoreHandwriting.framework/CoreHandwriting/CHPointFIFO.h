@interface CHPointFIFO : NSObject {
    CHPointFIFO *_nextFIFO;
}

- (void)clear;
- (void)flush;
- (void).cxx_destruct;
- (void)addPoint:(SEL)a0;
- (void)emitPoint:(SEL)a0;
- (id)initWithFIFO:(id)a0;

@end
