@class NSArray;

@interface UITextTapRecognizer : UITapGestureRecognizer

@property (nonatomic) double touchBasedAllowableMovement;
@property (retain, nonatomic) NSArray *touchesForTap;

- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;

@end
