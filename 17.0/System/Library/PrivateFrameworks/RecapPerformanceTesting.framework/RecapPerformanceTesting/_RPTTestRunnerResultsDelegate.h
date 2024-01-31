@class NSString;

@interface _RPTTestRunnerResultsDelegate : NSObject <RPTTestRunnerDelegate>

@property (copy, nonatomic) id /* block */ resultsHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
