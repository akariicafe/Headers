@class NSArray, _UITextKitTextPosition, NSTextRange;

@interface _UITextKitTextRange : UITextRange <NSCopying>

@property (retain, nonatomic) _UITextKitTextPosition *start;
@property (retain, nonatomic) _UITextKitTextPosition *end;
@property (retain, nonatomic) NSArray *textKit2Ranges;
@property (readonly, nonatomic) NSTextRange *unionTextRange;

+ (id)rangeWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 affinity:(long long)a1;
+ (id)rangeWithTextContentManager:(id)a0 textRanges:(id)a1 startAffinity:(long long)a2 endAffinity:(long long)a3;
+ (id)rangeWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
+ (id)rangeWithTextContentManager:(id)a0 textRanges:(id)a1 affinity:(long long)a2;
+ (id)rangeWithStart:(id)a0 end:(id)a1;

- (id)init;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })asRange;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEmpty;

@end
