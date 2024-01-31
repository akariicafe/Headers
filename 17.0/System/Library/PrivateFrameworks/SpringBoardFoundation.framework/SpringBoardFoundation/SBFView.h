@class NSArray, NSString;

@interface SBFView : UIView <SBFCustomImplicitPropertyAnimating>

@property (nonatomic) struct CGSize { double width; double height; } intrinsicContentSize;
@property (copy, nonatomic) id /* block */ didMoveToWindowHandler;
@property (copy, nonatomic) NSArray *animatedLayerProperties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (void).cxx_destruct;
- (void)didMoveToWindow;

@end
