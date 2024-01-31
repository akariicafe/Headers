@class PXAppleMusicCurationInfo;
@protocol PXAudioAssetFetchResult;

@interface PXAppleMusicCuration : NSObject

@property (readonly, nonatomic) id<PXAudioAssetFetchResult> bestMusicSuggestions;
@property (readonly, nonatomic) id<PXAudioAssetFetchResult> musicForYou;
@property (readonly, nonatomic) id<PXAudioAssetFetchResult> musicForLocation;
@property (readonly, nonatomic) id<PXAudioAssetFetchResult> musicForTime;
@property (readonly, nonatomic) id<PXAudioAssetFetchResult> musicForPerformer;
@property (readonly, nonatomic) PXAppleMusicCurationInfo *musicCurationInfo;

- (id)init;
- (void).cxx_destruct;
- (id)initWithBestMusicSuggestions:(id)a0 musicForYou:(id)a1 musicForLocation:(id)a2 musicForTime:(id)a3 musicForPerformer:(id)a4 musicCurationInfo:(id)a5;

@end
