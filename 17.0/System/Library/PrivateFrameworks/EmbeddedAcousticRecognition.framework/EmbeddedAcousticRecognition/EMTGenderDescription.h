@interface EMTGenderDescription : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned long long gender;
@property (readonly, nonatomic) unsigned long long defaultGender;

- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithGender:(unsigned long long)a0 defaultGender:(unsigned long long)a1;

@end
