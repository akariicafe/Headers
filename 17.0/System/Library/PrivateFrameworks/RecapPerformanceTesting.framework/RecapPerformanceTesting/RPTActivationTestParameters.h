@class NSString, UIWindow;

@interface RPTActivationTestParameters : NSObject <RPTTestParameters>

@property (copy, nonatomic) NSString *testName;
@property (retain, nonatomic) UIWindow *window;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic) BOOL managesTestStartAndEnd;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id /* block */)composerBlock;
- (void)prepareWithComposer:(id)a0;
- (void).cxx_destruct;
- (id)initWithTestName:(id)a0 window:(id)a1 completionHandler:(id /* block */)a2;

@end
