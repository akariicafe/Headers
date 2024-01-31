@class NSString;

@interface _CNConstantFutureImpl : NSObject <CNFutureImpl> {
    id _result;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addFailureBlock:(id /* block */)a0;
- (BOOL)isCancelled;
- (id)resultBeforeDate:(id)a0 error:(id *)a1;
- (id)initWithResult:(id)a0;
- (BOOL)isFinished;
- (void)addSuccessBlock:(id /* block */)a0;
- (void)updateDescriptionWithBuilder:(id)a0;
- (void).cxx_destruct;
- (BOOL)cancel;

@end
