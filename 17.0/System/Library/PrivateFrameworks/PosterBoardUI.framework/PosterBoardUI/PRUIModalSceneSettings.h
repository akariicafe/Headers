@protocol PRUIModalEntryPoint;

@interface PRUIModalSceneSettings : UIApplicationSceneSettings

@property (readonly, copy, nonatomic) id<PRUIModalEntryPoint> entryPoint;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;

@end
