@class NSObject;
@protocol OS_dispatch_data;

@interface TSUStreamDataCompression : TSUStreamCompression {
    NSObject<OS_dispatch_data> *_outputData;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_data> *outputData;

- (void)setHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithAlgorithm:(int)a0 operation:(int)a1;
- (BOOL)handleData:(id)a0 isDone:(BOOL)a1;

@end
