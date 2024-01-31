@protocol PRUIModalEntryPoint;

@interface PRUIMutableModalSceneSettings : UIMutableApplicationSceneSettings

@property (copy, nonatomic) id<PRUIModalEntryPoint> entryPoint;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
