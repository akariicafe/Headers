@class NSString, UIImageView, UIImage, UILabel, CHUISWidgetHostViewController, MTMaterialView;
@protocol PRComplicationGalleryItemViewDelegate;

@interface PRComplicationGalleryItemView : UIView <UIDragInteractionDelegate> {
    UIImageView *_iconImageView;
    UILabel *_label;
    MTMaterialView *_widgetBackgroundView;
}

@property (retain, nonatomic) UIImage *iconImage;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) CHUISWidgetHostViewController *widgetHostViewController;
@property (weak, nonatomic) id<PRComplicationGalleryItemViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dragInteraction:(id)a0 session:(id)a1 willEndWithOperation:(unsigned long long)a2;
- (id)dragInteraction:(id)a0 itemsForBeginningSession:(id)a1;
- (void)dragInteraction:(id)a0 session:(id)a1 didEndWithOperation:(unsigned long long)a2;
- (void)dragInteraction:(id)a0 sessionWillBegin:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)dragInteraction:(id)a0 previewForLiftingItem:(id)a1 session:(id)a2;
- (void).cxx_destruct;
- (BOOL)_descendantsShouldHighlight;
- (void)_addDragInteraction;

@end
