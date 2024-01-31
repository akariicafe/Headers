@interface TSCHStyleOwnerReference : NSObject <NSCopying> {
    int _type;
    unsigned long long _index;
}

@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) unsigned long long index;
@property (readonly, nonatomic) Class styleClass;
@property (readonly, nonatomic) Class nonstyleClass;
@property (readonly, nonatomic) Class genericPropertyMapClass;

+ (id)styleOwnerReferenceWithType:(int)a0 index:(unsigned long long)a1;

- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithStyleOwnerType:(int)a0 index:(unsigned long long)a1;

@end
