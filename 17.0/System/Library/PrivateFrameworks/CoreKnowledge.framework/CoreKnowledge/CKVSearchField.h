@class NSString;

@interface CKVSearchField : NSObject <NSCopying>

@property (readonly, nonatomic) long long fieldType;
@property (readonly, nonatomic) NSString *fieldText;

- (id)init;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithType:(long long)a0 text:(id)a1;
- (BOOL)isEqualToField:(id)a0;

@end
