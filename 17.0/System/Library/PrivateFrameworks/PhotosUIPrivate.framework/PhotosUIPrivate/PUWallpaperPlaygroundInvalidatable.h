@class NSString;

@interface PUWallpaperPlaygroundInvalidatable : NSObject <PUInvalidatable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pu_invalidate;

@end
