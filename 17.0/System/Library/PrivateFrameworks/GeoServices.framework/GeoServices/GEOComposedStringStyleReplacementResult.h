@class NSString, NSDictionary;

@interface GEOComposedStringStyleReplacementResult : NSObject {
    int type;
    NSString *string;
    NSString *token;
    NSDictionary *attributes;
    struct _NSRange { unsigned long long location; unsigned long long length; } range;
}

@property (readonly, nonatomic) NSString *string;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } range;
@property (readonly, nonatomic) NSString *token;
@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) NSDictionary *attributes;

- (void).cxx_destruct;

@end
