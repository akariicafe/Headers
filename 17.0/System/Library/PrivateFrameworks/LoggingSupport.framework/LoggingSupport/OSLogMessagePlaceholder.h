@class NSString, NSArray;

@interface OSLogMessagePlaceholder : NSObject {
    struct os_log_fmt_cspec_s { char *x0; unsigned short x1; unsigned char x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; int x7; int x8; char *x9; char *x10; char *x11; unsigned long long x12; } *_placeholder;
    NSString *_placeholderString;
    NSArray *_placeholderTokens;
}

@property (readonly, nonatomic) NSString *rawString;
@property (readonly, nonatomic) NSArray *tokens;
@property (readonly, nonatomic) NSString *typeNamespace;
@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) int width;
@property (readonly, nonatomic) int precision;

- (void)dealloc;
- (id)initWithPlaceholderStruct:(struct os_log_fmt_cspec_s { char *x0; unsigned short x1; unsigned char x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; int x7; int x8; char *x9; char *x10; char *x11; unsigned long long x12; } *)a0;

@end
