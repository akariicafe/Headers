@interface OITSUMutableRetainedPointerSet : OITSUMutablePointerSet

+ (Class)privateMutableClass;
+ (Class)privateNonMutableClass;

- (id)init;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)allObjects;

@end
