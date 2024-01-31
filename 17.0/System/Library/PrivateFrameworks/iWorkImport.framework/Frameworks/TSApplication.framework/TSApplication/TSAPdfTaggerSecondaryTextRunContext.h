@interface TSAPdfTaggerSecondaryTextRunContext : TSAPdfTaggerContext

@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } charRange;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } baseTextRange;

- (id)initWithStateOfTagger:(id)a0 charRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 baseTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;

@end
