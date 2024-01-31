@class NSDictionary;

@interface PSIParsedDate : NSObject

@property (readonly, copy, nonatomic) NSDictionary *attributes;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } extensionRange;

- (void).cxx_destruct;
- (id)initWithAttributes:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 extensionRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;

@end
