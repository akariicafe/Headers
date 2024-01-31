@class NUComposition;

@interface PXEditAppliedCompositionAction : PXEditCompositionAction {
    NUComposition *_targetComposition;
}

@property (readonly, nonatomic) NUComposition *sourceComposition;

- (void)performAction:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithCompositionController:(id)a0;
- (id)initWithCompositionController:(id)a0 sourceComposition:(id)a1;
- (id)targetComposition;

@end
