@class NSString;

@interface UIDictationSubstring : NSObject

@property (retain, nonatomic) NSString *string;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } enclosingRange;

- (void).cxx_destruct;
- (id)initWithString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 enclosingRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;

@end
