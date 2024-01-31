@interface IEUpdater : NSObject

- (id)getHighestVersionWithinRelease:(id)a0;
- (id)getFileVersion:(id)a0;
- (BOOL)updateToLatest:(id)a0;
- (BOOL)isUpdateAvailable:(id)a0;

@end
