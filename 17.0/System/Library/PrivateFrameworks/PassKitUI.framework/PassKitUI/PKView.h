@class NSHashTable;

@interface PKView : UIView {
    NSHashTable *_observers;
}

- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)addWindowObserver:(id)a0;
- (void)removeWindowObserver:(id)a0;

@end
