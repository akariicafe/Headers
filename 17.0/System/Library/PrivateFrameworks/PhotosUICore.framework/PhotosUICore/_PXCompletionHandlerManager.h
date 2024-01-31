@class NSMutableArray;
@protocol _PXCompletionHandlerManagerDelegate;

@interface _PXCompletionHandlerManager : NSObject {
    NSMutableArray *_completionHandlers;
}

@property (weak, nonatomic) id<_PXCompletionHandlerManagerDelegate> delegate;

- (void)addCompletionHandler:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_handleTimeoutOfCompletionHandler:(id /* block */)a0;
- (void)callCompletionHandlers;

@end
