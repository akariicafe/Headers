@class DDRemoteActionContext;

@interface DDRemoteActionViewControllerProvider : NSObject

@property (readonly) DDRemoteActionContext *actionContext;

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (void)createViewControllerWithCompletionHandler:(id /* block */)a0;

@end
