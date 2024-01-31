@class NSString, NSAttributedString;

@interface GEOComposedStringTokenReplacementResult : NSObject <NSCopying> {
    BOOL success;
    int type;
    NSString *string;
    NSAttributedString *attributedString;
    struct _NSRange { unsigned long long location; unsigned long long length; } range;
}

@property (readonly, nonatomic) BOOL success;
@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) NSString *string;
@property (readonly, nonatomic) NSAttributedString *attributedString;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } range;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
