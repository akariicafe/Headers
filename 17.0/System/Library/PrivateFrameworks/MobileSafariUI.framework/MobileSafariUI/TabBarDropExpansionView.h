@class NSString;
@protocol TabBarDropExpansionViewDelegate;

@interface TabBarDropExpansionView : UIView <UIDropInteractionDelegate_Private>

@property (weak, nonatomic) id<TabBarDropExpansionViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (long long)_dropInteraction:(id)a0 dataOwnerForSession:(id)a1;
- (void)dropInteraction:(id)a0 sessionDidEnd:(id)a1;
- (BOOL)dropInteraction:(id)a0 canHandleSession:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dropInteraction:(id)a0 sessionDidEnter:(id)a1;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithCoder:(id)a0;

@end
