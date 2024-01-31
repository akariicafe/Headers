@class NSString;

@interface RPTWaitTestParameters : NSObject <RPTTestParameters>

@property (readonly, nonatomic) double waitDuration;
@property (readonly, copy, nonatomic) id /* block */ completionHandler;
@property (copy, nonatomic) NSString *testName;
@property (readonly, nonatomic) BOOL managesTestStartAndEnd;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id /* block */)composerBlock;
- (void)prepareWithComposer:(id)a0;
- (void).cxx_destruct;
- (id)initWithTestName:(id)a0 wait:(double)a1 completionHandler:(id /* block */)a2;
- (id)initWithWait:(double)a0;

@end
