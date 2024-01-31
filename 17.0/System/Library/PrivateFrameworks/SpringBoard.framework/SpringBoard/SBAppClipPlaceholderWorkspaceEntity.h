@class NSString;

@interface SBAppClipPlaceholderWorkspaceEntity : SBWorkspaceEntity

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *futureSceneIdentifier;
@property (readonly, nonatomic) BOOL needsUpdate;

+ (BOOL)isAppClipUpdateAvailableForBundleIdentifier:(id)a0;

- (unsigned long long)hash;
- (BOOL)wantsExclusiveForeground;
- (BOOL)isAppClipPlaceholderEntity;
- (id /* block */)entityGenerator;
- (void).cxx_destruct;
- (Class)viewControllerClass;
- (BOOL)_supportsLayoutRole:(long long)a0;
- (BOOL)isEqual:(id)a0;
- (id)appClipPlaceholderEntity;
- (BOOL)supportsPresentationAtAnySize;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithBundleIdentifier:(id)a0 futureSceneIdentifier:(id)a1 needsUpdate:(BOOL)a2;

@end
