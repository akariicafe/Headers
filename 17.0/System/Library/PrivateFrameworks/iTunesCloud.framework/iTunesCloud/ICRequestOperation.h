@class NSProgress, NSString;

@interface ICRequestOperation : ICAsyncOperation <NSProgressReporting> {
    id /* block */ _completionHandler;
}

@property (retain, nonatomic) NSProgress *progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)finishWithError:(id)a0;
- (void)performRequestOnOperationQueue:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)performRequestWithCompletionHandler:(id /* block */)a0;

@end
