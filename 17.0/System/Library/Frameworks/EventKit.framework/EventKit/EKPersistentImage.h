@interface EKPersistentImage : EKPersistentObject

+ (id)relations;
+ (id)defaultPropertiesToLoad;
+ (Class)meltedClass;

- (void)setType:(long long)a0;
- (void)setIdentifier:(id)a0;
- (void)setColorData:(id)a0;
- (void)setName:(id)a0;
- (id)identifier;
- (int)entityType;
- (void)setSource:(id)a0;
- (id)source;
- (id)colorData;
- (id)name;
- (long long)type;

@end
