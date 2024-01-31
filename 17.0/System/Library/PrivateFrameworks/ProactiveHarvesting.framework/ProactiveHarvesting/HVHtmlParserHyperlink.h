@class NSURL;

@interface HVHtmlParserHyperlink : NSObject

@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;

- (id)init;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithURL:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (BOOL)isEqualToHtmlParserHyperlink:(id)a0;

@end
