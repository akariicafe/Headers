@class NSString;

@interface TFKey : NSObject <NSCopying>

@property (readonly, nonatomic) id type;
@property (readonly, nonatomic) unsigned long long address;
@property (readonly, nonatomic) NSString *name;

- (unsigned long long)hash;
- (id)initWithAddress:(unsigned long long)a0 type:(id)a1 name:(id)a2;
- (id)initWithTypeName:(id)a0 name:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithName:(id)a0;
- (id)initWithAddressOfType:(id)a0 name:(id)a1;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
