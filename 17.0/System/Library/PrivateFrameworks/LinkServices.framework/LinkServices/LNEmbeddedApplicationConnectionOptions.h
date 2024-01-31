@class NSString;

@interface LNEmbeddedApplicationConnectionOptions : LNConnectionOptions <LNApplicationConnectionOptions>

@property (nonatomic) BOOL suspended;
@property (nonatomic) BOOL sceneless;
@property (nonatomic) long long openApplicationPriority;
@property (nonatomic) BOOL allowsForegroundAppLaunchWhileInCarPlay;
@property (nonatomic) BOOL useSpotlightLaunchOrigin;
@property (readonly, nonatomic) BOOL isForeground;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
