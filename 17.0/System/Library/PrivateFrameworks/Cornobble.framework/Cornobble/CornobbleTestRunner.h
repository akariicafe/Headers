@class NSString;

@interface CornobbleTestRunner : NSObject <CornobbleTestRunnerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)playInteraction:(id)a0 completionHandler:(id /* block */)a1;
+ (void)performTestNamed:(id)a0 usingComposer:(id /* block */)a1;
+ (BOOL)isCornobbleAvailable;
+ (void)performFingerOnGlassScrollTestNamed:(id)a0 withParameters:(id)a1 completionHandler:(id /* block */)a2;
+ (void)performFingerOnGlassScrollWithParameters:(id)a0;
+ (void)performStandardScrollingTestNamed:(id)a0 onScrollView:(id)a1;
+ (void)performStandardScrollingTestNamed:(id)a0 onScrollView:(id)a1 iterations:(unsigned long long)a2;
+ (void)performStandardScrollingTestNamed:(id)a0 onScrollView:(id)a1 iterations:(unsigned long long)a2 canFlick:(BOOL)a3;
+ (void)performStandardScrollingTestNamed:(id)a0 onScrollView:(id)a1 iterations:(unsigned long long)a2 canFlick:(BOOL)a3 completionHandler:(id /* block */)a4;
+ (void)performStandardScrollingTestNamed:(id)a0 onScrollView:(id)a1 iterations:(unsigned long long)a2 pages:(unsigned long long)a3 canFlick:(BOOL)a4 completionHandler:(id /* block */)a5;
+ (void)performStandardScrollingTestNamed:(id)a0 onScrollView:(id)a1 iterations:(unsigned long long)a2 pages:(unsigned long long)a3 direction:(long long)a4 canFlick:(BOOL)a5 completionHandler:(id /* block */)a6;
+ (void)performTestNamed:(id)a0 usingComposer:(id /* block */)a1 completionHandler:(id /* block */)a2;
+ (void)performTestNamed:(id)a0 withEventStream:(id)a1;
+ (void)performTestNamed:(id)a0 withEventStream:(id)a1 completionHandler:(id /* block */)a2;
+ (void)performTestNamed:(id)a0 withRecapCommandString:(id)a1 onView:(id)a2;
+ (void)performTestNamed:(id)a0 withRecapCommandString:(id)a1 onView:(id)a2 completionHandler:(id /* block */)a3;
+ (void)performTestNamed:(id)a0 withRecapFile:(id)a1 onView:(id)a2;
+ (void)performTestNamed:(id)a0 withRecapFile:(id)a1 onView:(id)a2 completionHandler:(id /* block */)a3;


@end
