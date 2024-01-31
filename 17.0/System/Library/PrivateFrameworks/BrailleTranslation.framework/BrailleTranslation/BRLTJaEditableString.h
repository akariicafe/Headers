@class BRLTJaEditableStringInternal, NSString, NSDictionary;

@interface BRLTJaEditableString : NSObject

@property (readonly) BRLTJaEditableStringInternal *underlyingObject;
@property (readonly, copy, nonatomic) NSString *string;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } NSSelection;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } NSFocus;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } NSSuggestion;
@property (readonly, nonatomic) NSDictionary *tokenDict;

- (id)init;
- (void).cxx_destruct;
- (void)append:(id)a0;
- (id)initWithString:(id)a0 selection:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 focus:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 suggestion:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 tokenRanges:(id)a4;
- (id)initWithString:(id)a0 selection:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 focus:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 token:(long long)a3;
- (id)initWithString:(id)a0 selection:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 focus:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 token:(long long)a3 suggestion:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4;
- (long long)tokenForLocation:(long long)a0;

@end
