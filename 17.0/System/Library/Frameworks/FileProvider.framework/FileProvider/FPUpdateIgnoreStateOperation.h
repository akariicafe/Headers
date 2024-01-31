@class NSArray;

@interface FPUpdateIgnoreStateOperation : FPActionOperation {
    NSArray *_items;
    BOOL _ignoreState;
}

- (void)finishWithResult:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (void)actionMain;
- (id)initWithItems:(id)a0 ignoreState:(BOOL)a1 action:(id)a2;
- (void)presendNotifications;
- (id)replicateForItems:(id)a0;

@end
