@interface _HKSectionedContextViewConfiguration : NSObject <NSCopying>

@property (nonatomic) BOOL isHorizontalInTwoOverlaysMode;
@property (nonatomic) BOOL bottomInsetsEnabled;
@property (nonatomic) BOOL horizontalInsetsEnabled;
@property (nonatomic) BOOL topInsetsWithNoHeaderEnabled;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
