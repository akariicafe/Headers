@class NSString, UIBarButtonItem;

@interface SFBarButtonItemLongPressGestureRecognizer : UILongPressGestureRecognizer <UIGestureRecognizerDelegate> {
    UIBarButtonItem *_barButtonItem;
    id _target;
    SEL _longPressAction;
    SEL _touchDownAction;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)gestureRecognizerTarget:(id)a0 longPressAction:(SEL)a1 touchDownAction:(SEL)a2 attachedToBarButtonItem:(id)a3;

- (void)_contentSizeCategoryDidChange:(id)a0;
- (void)longPress:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)_updateMinimumPressDurationForContentSizeCategory:(id)a0;
- (void)_invokeLongPressAction;
- (void).cxx_destruct;

@end
