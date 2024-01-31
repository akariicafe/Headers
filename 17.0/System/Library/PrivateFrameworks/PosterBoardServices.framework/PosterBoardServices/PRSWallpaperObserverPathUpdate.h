@class NSString, PRSServerPosterIdentity, PRSServerPosterPath;

@interface PRSWallpaperObserverPathUpdate : NSObject <BSXPCSecureCoding>

@property (retain, nonatomic) PRSServerPosterPath *path;
@property (retain, nonatomic) PRSServerPosterIdentity *identity;
@property (nonatomic) unsigned long long locations;
@property (nonatomic) unsigned long long changed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;

@end
