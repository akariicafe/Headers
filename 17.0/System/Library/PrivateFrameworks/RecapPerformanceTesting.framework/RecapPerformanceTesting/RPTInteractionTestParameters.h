@class NSArray, NSString;

@interface RPTInteractionTestParameters : NSObject <RPTTestParameters>

@property (readonly, copy, nonatomic) NSArray *interactions;
@property (copy, nonatomic) NSArray *durations;
@property (copy, nonatomic) NSArray *delays;
@property (readonly, copy, nonatomic) id /* block */ completionHandler;
@property (copy, nonatomic) NSString *testName;
@property (readonly, nonatomic) BOOL managesTestStartAndEnd;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)interactionTestParametersWithTestName:(id)a0 interaction:(id)a1 duration:(double)a2 completionHandler:(id /* block */)a3;

- (id /* block */)composerBlock;
- (void)prepareWithComposer:(id)a0;
- (void).cxx_destruct;
- (id)initWithTestName:(id)a0 interactions:(id)a1 completionHandler:(id /* block */)a2;

@end
