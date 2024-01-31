@class NSNumber, NSArray, JSManagedValue, NSString, IKAppContext, NSMutableArray;

@interface IKScriptsEvaluator : NSObject <ISStoreURLOperationDelegate, NSURLConnectionDataDelegate>

@property (nonatomic) BOOL isJingleRequest;
@property (retain, nonatomic) NSArray *scripts;
@property (weak, nonatomic) IKAppContext *appContext;
@property (retain, nonatomic) JSManagedValue *callback;
@property (retain, nonatomic) NSMutableArray *records;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSNumber *metricsLoadURLSessionDuration;
@property (readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentage;
@property (readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)evaluate;
- (void)operation:(id)a0 failedWithError:(id)a1;
- (void)evaluateScripts;
- (void)scriptDidLoadWithID:(id)a0 data:(id)a1 error:(id)a2;
- (void)_operation:(id)a0 finishedWithResult:(id)a1 error:(id)a2;
- (void)_sendCallback:(id)a0 inContext:(id)a1 success:(BOOL)a2;
- (void)handleScirptLoadFailure;
- (id)initWithScripts:(id)a0 withContext:(id)a1 callback:(id)a2 jingleRequest:(BOOL)a3;
- (void)operation:(id)a0 finishedWithOutput:(id)a1;
- (void)parseScriptData:(id)a0 successPredicate:(id /* block */)a1 completion:(id /* block */)a2;

@end
