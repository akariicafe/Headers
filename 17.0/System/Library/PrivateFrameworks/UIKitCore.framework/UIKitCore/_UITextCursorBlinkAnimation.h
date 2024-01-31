@class _UIShapeView, NSString, CAKeyframeAnimation;

@interface _UITextCursorBlinkAnimation : NSObject <_UITextCursorAnimation> {
    CAKeyframeAnimation *_caretBlinkAnimation;
}

@property (readonly, weak, nonatomic) _UIShapeView *cursorShapeView;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reset;
- (void).cxx_destruct;
- (id)initWithCursorShapeView:(id)a0;

@end
