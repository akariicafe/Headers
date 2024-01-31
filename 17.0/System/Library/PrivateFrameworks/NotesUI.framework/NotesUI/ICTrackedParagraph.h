@class ICTTParagraphStyle;

@interface ICTrackedParagraph : NSObject

@property (retain, nonatomic) ICTTParagraphStyle *paragraph;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } characterRange;

- (id)description;
- (void).cxx_destruct;

@end
