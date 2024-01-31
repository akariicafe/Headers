@class NSDictionary, NSMutableDictionary;

@interface SXTextStyleAttributes : NSObject <NSCopying>

@property (readonly, nonatomic) NSMutableDictionary *mutableAttributes;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (readonly, nonatomic) NSDictionary *attributes;

+ (id)attributesWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

- (id)description;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addAttribute:(id)a0 value:(id)a1;

@end
