@class NSString;

@interface _SFOpenURLOperationDelegate : NSObject <LSOpenResourceOperationDelegate> {
    id /* block */ _completionHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)openResourceOperation:(id)a0 didFailWithError:(id)a1;
- (void)openResourceOperation:(id)a0 didFinishCopyingResource:(id)a1;
- (void)openResourceOperationDidComplete:(id)a0;
- (void)_didFinishWithSuccess:(BOOL)a0;

@end
