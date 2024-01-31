@class CKActionMenuGestureRecognizer, UIButton, NSDate;
@protocol CKActionMenuGestureRecognizerButtonDelegate;

@interface CKActionMenuGestureRecognizerButton : NSObject

@property (retain, nonatomic) CKActionMenuGestureRecognizer *gestureRecognizer;
@property (retain, nonatomic) UIButton *button;
@property (retain, nonatomic) NSDate *gestureDidBeginDate;
@property (weak, nonatomic) id<CKActionMenuGestureRecognizerButtonDelegate> delegate;

+ (id)actionMenuGestureRecognizerButtonWithButton:(id)a0;

- (void).cxx_destruct;
- (void)gestureRecognized:(id)a0;
- (id)initWithGestureRecognizer:(id)a0 button:(id)a1;
- (void)touchDownButton:(id)a0;
- (void)touchUpInsideButton:(id)a0;
- (void)touchUpOutsideButton:(id)a0;

@end
