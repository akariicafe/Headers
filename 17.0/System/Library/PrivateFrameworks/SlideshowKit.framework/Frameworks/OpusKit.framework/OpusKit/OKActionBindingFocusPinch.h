@class NSString, OFUITrackingPinchGestureRecognizer;

@interface OKActionBindingFocusPinch : OKActionBinding <UIGestureRecognizerDelegate> {
    OFUITrackingPinchGestureRecognizer *_pinchGestureRecognizer;
    unsigned long long _presentationMode;
}

@property (nonatomic) unsigned long long mode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)supportedSettings;

- (void)unload;
- (id)init;
- (void)dealloc;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)handlePinch:(id)a0;
- (id)initWithSettings:(id)a0;
- (id)settingObjectForKey:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_setFocusSize:(struct CGSize { double x0; double x1; })a0 angle:(float)a1 toWidgetView:(id)a2;
- (void)loadForResponder:(id)a0 scope:(unsigned long long)a1;
- (BOOL)ownsGestureRecognizer:(id)a0;
- (BOOL)respondsToAction:(id)a0 isTouchCountAgnostic:(BOOL)a1;

@end
