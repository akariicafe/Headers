@class NSArray;

@interface FPUnpinOperation : FPActionOperation {
    NSArray *_items;
}

- (id)initWithItems:(id)a0;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (void)actionMain;
- (void)presendNotifications;

@end
