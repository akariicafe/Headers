@class NSString;

@interface FTMutableKeyword : FTKeyword

@property (copy, nonatomic) NSString *keyword_orthography;
@property (nonatomic) double posterior;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
