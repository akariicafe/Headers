@interface NTKTimeOffsetManager : NSObject

@property (nonatomic) double timeOffset;

+ (id)sharedManager;

- (id)init;
- (void)dealloc;
- (id)faceDisplayTime;
- (void)_loadTimeOffset;
- (void)_handleFaceDefaultsChanged;
- (void)_handleFaceLibraryReloaded;
- (void)_updateTimeOffset:(BOOL)a0;
- (id)displayTimeForRealTime:(id)a0;
- (void)forceUpdateTimeOffset;

@end
