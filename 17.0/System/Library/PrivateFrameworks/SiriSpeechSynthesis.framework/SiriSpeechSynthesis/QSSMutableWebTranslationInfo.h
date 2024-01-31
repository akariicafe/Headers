@class NSString, NSArray;

@interface QSSMutableWebTranslationInfo : QSSWebTranslationInfo

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSArray *spans;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
