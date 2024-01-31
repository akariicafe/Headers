@class NSString, UIKeyboardEmojiDraggableView, UIKBRenderConfig, UIView;

@interface UIKeyboardEmojiVariantViewCell : UIView <UIKeyboardEmojiDraggableViewDelegate> {
    UIKeyboardEmojiDraggableView *_labelView;
    UIView *_backgroundView;
}

@property (retain, nonatomic) NSString *emoji;
@property (nonatomic) BOOL highlighted;
@property (retain, nonatomic) UIKBRenderConfig *renderConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
