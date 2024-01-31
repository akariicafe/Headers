@interface EKPersistentExceptionDate : EKPersistentObject

+ (id)relations;
+ (Class)meltedClass;

- (id)owner;
- (void)setOwner:(id)a0;
- (void)setDate:(id)a0;
- (int)entityType;
- (id)description;
- (id)date;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
