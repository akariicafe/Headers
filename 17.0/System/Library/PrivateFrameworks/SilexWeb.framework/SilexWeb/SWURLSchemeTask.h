@class NSURLRequest, NSString;
@protocol SWLogger, WKURLSchemeTask;

@interface SWURLSchemeTask : NSObject <WKURLSchemeTask>

@property (readonly, nonatomic) id<WKURLSchemeTask> task;
@property (readonly, nonatomic) id<SWLogger> logger;
@property (copy, nonatomic, setter=onCompletion:) id /* block */ completionBlock;
@property (readonly, copy, nonatomic) NSURLRequest *request;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didReceiveData:(id)a0;
- (void).cxx_destruct;
- (void)didReceiveResponse:(id)a0;
- (void)didFailWithError:(id)a0;
- (void)didFinish;
- (void)performBlockOnMainThread:(id /* block */)a0;
- (id)initWithTask:(id)a0 logger:(id)a1;

@end
