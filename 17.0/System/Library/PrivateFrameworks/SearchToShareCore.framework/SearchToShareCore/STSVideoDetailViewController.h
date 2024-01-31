@class NSString, LPYouTubePlayerView;

@interface STSVideoDetailViewController : STSResultDetailViewController <LPYouTubePlayerDelegate> {
    LPYouTubePlayerView *_playerView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
