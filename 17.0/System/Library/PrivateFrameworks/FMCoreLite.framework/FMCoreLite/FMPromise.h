@class NSString, FMFuture;

@interface FMPromise : NSObject <FMPromise>

@property (readonly) FMFuture *future;
@property (copy, nonatomic) NSString *descriptor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)finishWithResult:(id)a0;
- (id)init;
- (id)initWithFuture:(id)a0;
- (BOOL)finishWithNoResult;
- (BOOL)finishWithResult:(id)a0 error:(id)a1;
- (id /* block */)errorOnlyCompletionHandlerAdapter;
- (id /* block */)completionHandlerAdapter;
- (void).cxx_destruct;
- (BOOL)finishWithError:(id)a0;

@end
