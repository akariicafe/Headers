@interface CKBalloonSelectionState : NSObject

@property (readonly, nonatomic) long long style;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } textSelectionRange;

+ (id)balloonSelectionState:(long long)a0;
+ (id)balloonSelectionState:(long long)a0 textSelectionRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

- (id)description;
- (id)initWithStyle:(long long)a0 textSelectionRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end
