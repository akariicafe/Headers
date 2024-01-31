@class VNRequest, NSString, NSNumber;

@interface VCPVideoProcessorNode : NSObject

@property (readonly, nonatomic) VNRequest *request;
@property (readonly, nonatomic) id /* block */ frameProcessor;
@property (readonly, nonatomic) NSString *typeDescription;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } timeInterval;
@property (readonly, nonatomic) unsigned long long frameInterval;
@property (readonly, nonatomic) NSNumber *frameLimit;
@property (nonatomic) unsigned long long processedFrameCount;

+ (id)nodeWithFrameProcessor:(id /* block */)a0 andConfiguration:(id)a1;
+ (id)nodeWithRequest:(id)a0 andConfiguration:(id)a1;
+ (BOOL)validateConfiguration:(id)a0 withError:(id *)a1;

- (BOOL)finished;
- (void).cxx_destruct;
- (void)_processConfiguration:(id)a0;
- (id)initWithFrameProcessor:(id /* block */)a0 andConfiguration:(id)a1;
- (id)initWithRequest:(id)a0 andConfiguration:(id)a1;

@end
