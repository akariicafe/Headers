@class NSString;

@interface KNBuildWebVideoStart : KNBuildAppear <KNAnimationPluginAmbientAnimationStart>

@property (class, readonly, nonatomic) BOOL startsAmbientAnimation;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)supportedTypes;
+ (id)animationName;
+ (id)animationFilter;
+ (long long)animationCategory;
+ (id)localizedMenuString:(long long)a0;
+ (id)thumbnailImageNameForType:(long long)a0;

- (void)addAnimationsTo:(id)a0 context:(id)a1;

@end
