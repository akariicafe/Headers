@interface NUPlatform_iOS : NUPlatform

- (id)mainDisplay;
- (id)init;
- (BOOL)defaultSupportsLiveVideoRendering;
- (BOOL)supportsANE;
- (id)deviceForDisplay:(id)a0;
- (id)displays;
- (id)mainDevice;

@end
