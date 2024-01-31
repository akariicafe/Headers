@class NSArray;

@interface FPTransformOperation : FPActionOperation

@property (readonly, nonatomic) NSArray *items;
@property (copy, nonatomic) id /* block */ transformCompletionBlock;

- (void)finishWithResult:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (id)fp_prettyDescription;
- (id)finalItemsForStitcherForResult:(id)a0;
- (void)actionMain;
- (id)initWithItemsOfDifferentProviders:(id)a0 action:(id)a1;
- (void)postStitchingFinishWithResult:(id)a0 error:(id)a1;
- (void)presendNotifications;
- (unsigned long long)transformItem:(id)a0 atIndex:(unsigned long long)a1;

@end
