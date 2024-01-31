@class NSString;

@interface QSSMutableKeyword : QSSKeyword

@property (copy, nonatomic) NSString *keyword_orthography;
@property (nonatomic) double posterior;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
