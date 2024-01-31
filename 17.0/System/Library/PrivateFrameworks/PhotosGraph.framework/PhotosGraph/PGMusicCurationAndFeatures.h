@class PGMusicCurationFeatures, PGMusicCuration, PGFlexMusicCuration;

@interface PGMusicCurationAndFeatures : NSObject

@property (readonly) PGMusicCuration *appleMusicCuration;
@property (readonly) PGFlexMusicCuration *flexMusicCuration;
@property (readonly) PGMusicCurationFeatures *features;

- (void).cxx_destruct;
- (id)initWithAppleMusicCuration:(id)a0 features:(id)a1;
- (id)initWithFlexMusicCuration:(id)a0 features:(id)a1;

@end
