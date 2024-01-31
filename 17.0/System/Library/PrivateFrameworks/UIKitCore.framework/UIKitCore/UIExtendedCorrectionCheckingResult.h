@class NSDictionary;

@interface UIExtendedCorrectionCheckingResult : NSCorrectionCheckingResult {
    struct _NSRange { unsigned long long location; unsigned long long length; } _sentenceRange;
    NSDictionary *_detail;
}

- (id)detail;
- (void).cxx_destruct;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 replacementString:(id)a1 sentenceRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 detail:(id)a3;
- (BOOL)isPostEditingResult;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })sentenceRange;

@end
