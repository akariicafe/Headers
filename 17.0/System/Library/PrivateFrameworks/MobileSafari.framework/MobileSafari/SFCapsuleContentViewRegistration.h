@class NSMutableSet;

@interface SFCapsuleContentViewRegistration : NSObject {
    NSMutableSet *_views;
    id /* block */ _createViewBlock;
}

- (id)createOrDequeueViewWithExistingView:(id)a0;
- (id)initWithCreateViewBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)enqueueView:(id)a0;
- (void)discardView:(id)a0;

@end
