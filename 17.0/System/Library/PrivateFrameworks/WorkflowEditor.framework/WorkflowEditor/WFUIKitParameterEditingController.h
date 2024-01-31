@protocol WFUIKitParameterEditingControllerDelegate;

@interface WFUIKitParameterEditingController : NSObject

@property (weak, nonatomic) id<WFUIKitParameterEditingControllerDelegate> delegate;

- (void).cxx_destruct;
- (void)createViewControllerWithInitialState:(id)a0 completionHandler:(id /* block */)a1;

@end
