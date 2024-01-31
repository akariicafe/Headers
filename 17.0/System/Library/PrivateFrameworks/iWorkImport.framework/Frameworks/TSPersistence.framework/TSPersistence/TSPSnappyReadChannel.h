@class NSString;
@protocol TSUStreamReadChannel;

@interface TSPSnappyReadChannel : NSObject <TSUStreamReadChannel> {
    id<TSUStreamReadChannel> _readChannel;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)close;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithReadChannel:(id)a0;
- (void)readWithHandler:(id /* block */)a0;
- (id)uncompressData:(id)a0;
- (BOOL)processData:(id *)a0 isDone:(BOOL)a1 handler:(id /* block */)a2;
- (void)readWithHandlerAndWait:(id /* block */)a0;
- (id)uncompressDataFromSource:(struct SnappySource { void /* function */ **x0; id x1; unsigned long long x2; unsigned long long x3; id x4; unsigned long long x5; unsigned long long x6; char *x7; } *)a0;

@end
