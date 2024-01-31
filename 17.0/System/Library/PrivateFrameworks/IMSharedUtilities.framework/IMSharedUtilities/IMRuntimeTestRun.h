@class IMRuntimeTest;

@interface IMRuntimeTestRun : NSObject

@property (getter=hasSucceeded) BOOL succeeded;
@property (readonly) IMRuntimeTest *test;

- (void)start;
- (void)stop;
- (void).cxx_destruct;
- (id)initWithTest:(id)a0;
- (void)recordFailureWithDescription:(id)a0 inFile:(id)a1 atLine:(unsigned long long)a2 expected:(BOOL)a3;

@end
