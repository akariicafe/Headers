@class NSHashTable, NSString, UIHoverGestureRecognizer;

@interface SBIndirectTouchLifecycleMonitor : NSObject <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIHoverGestureRecognizer *hoverGestureRecognizer;
@property (retain, nonatomic) NSHashTable *observers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)handleHoverEvent:(id)a0;
- (id)initWithSystemGestureManager:(id)a0;
- (struct CGPoint { double x0; double x1; })systemGestureHoverLocationInView:(id)a0;

@end
