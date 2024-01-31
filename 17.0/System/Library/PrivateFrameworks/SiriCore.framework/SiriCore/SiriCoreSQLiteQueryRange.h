@interface SiriCoreSQLiteQueryRange : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned long long limit;
@property (readonly, nonatomic) unsigned long long offset;

- (id)initWithLimit:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithLimit:(unsigned long long)a0 offset:(unsigned long long)a1;

@end
