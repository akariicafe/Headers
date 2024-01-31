@class SXAXCustomRotorProvider, NSString;
@protocol SXScrollViewDelegate;

@interface SXScrollView : TSDScrollView <SXAXElementOccluder>

@property (retain, nonatomic) SXAXCustomRotorProvider *customRotorProvider;
@property (weak, nonatomic) id<SXScrollViewDelegate> scrollViewDelegate;
@property (readonly, nonatomic) BOOL isBouncing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canBecomeFocused;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)canBecomeFirstResponder;
- (void).cxx_destruct;
- (id)accessibilityCustomRotors;
- (BOOL)_accessibilityScrollingEnabled;
- (BOOL)shouldOccludeAccessibilityElement:(id)a0;

@end
