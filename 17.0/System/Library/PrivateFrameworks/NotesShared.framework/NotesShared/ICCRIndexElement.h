@class NSUUID;

@interface ICCRIndexElement : NSObject <NSCopying>

@property (retain, nonatomic) NSUUID *replica;
@property (nonatomic) long long integer;

+ (id)elementWithInteger:(long long)a0 replica:(id)a1;

- (unsigned long long)hash;
- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithInteger:(long long)a0 replica:(id)a1;

@end
