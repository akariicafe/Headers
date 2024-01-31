@class NSString, SBApplication;

@interface _SBStatusBarTapApplicationDestination : NSObject <NSCopying> {
    SBApplication *_application;
}

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *sceneIdentifier;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)application;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithApplication:(id)a0 sceneIdentifier:(id)a1;

@end
