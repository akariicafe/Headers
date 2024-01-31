@class NSString, NSDictionary;

@interface BRLTJaEditableStringInternal : NSObject <NSCopying> {
    void /* unknown type, empty encoding */ string;
    void /* unknown type, empty encoding */ selection;
    void /* unknown type, empty encoding */ focus;
    void /* unknown type, empty encoding */ suggestion;
    void /* unknown type, empty encoding */ tokenRanges;
}

@property (nonatomic, copy) NSString *string;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x0; unsigned long long x1; } NSSelection;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x0; unsigned long long x1; } NSFocus;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x0; unsigned long long x1; } NSSuggestion;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSDictionary *tokenDict;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(void *)a0;
- (void)append:(id)a0;
- (id)initWithString:(id)a0 NSSelection:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 NSFocus:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 NSSuggestion:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 tokenRangeDict:(id)a4;
- (id)initWithString:(id)a0 selection:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 focus:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 token:(long long)a3;
- (id)initWithString:(id)a0 selection:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 focus:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 token:(long long)a3 suggestion:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4;
- (long long)tokenForLocation:(long long)a0;

@end
