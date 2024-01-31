@class NSString, NSDictionary;

@interface HUStringInLabelTapGestureRecognizer : UITapGestureRecognizer

@property (retain, nonatomic) NSString *hitboxString;
@property (readonly, nonatomic) NSDictionary *userInfo;

- (BOOL)shouldReceiveEvent:(id)a0;
- (void).cxx_destruct;
- (BOOL)_didTapAttributedTextInLabel:(id)a0 targetRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 event:(id)a2;
- (id)initWithTarget:(id)a0 action:(SEL)a1 hitBoxString:(id)a2 userInfo:(id)a3;

@end
