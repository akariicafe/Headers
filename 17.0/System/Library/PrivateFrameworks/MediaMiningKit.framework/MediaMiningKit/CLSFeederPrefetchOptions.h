@interface CLSFeederPrefetchOptions : NSObject <NSCopying>

@property (nonatomic) unsigned long long personCountPrefetchMode;
@property (nonatomic) unsigned long long personsPrefetchMode;
@property (nonatomic) unsigned long long scenesPrefetchMode;
@property (nonatomic) unsigned long long faceInformationPrefetchMode;
@property (nonatomic) unsigned long long locationPrefetchMode;

+ (id)feederPrefetchOptionsWithDefaultMode:(unsigned long long)a0;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeWithFeederPrefetchOptions:(id)a0;

@end
