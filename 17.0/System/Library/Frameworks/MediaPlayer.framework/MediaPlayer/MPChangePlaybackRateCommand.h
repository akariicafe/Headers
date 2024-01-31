@class NSArray;

@interface MPChangePlaybackRateCommand : MPRemoteCommand {
    float _preferredRate;
}

@property (copy, nonatomic) NSArray *supportedPlaybackRates;

- (id)_mediaRemoteCommandInfoOptions;
- (void)setPreferredRate:(float)a0;
- (float)preferredRate;
- (void).cxx_destruct;
- (id)newCommandEventWithPlaybackRate:(float)a0;

@end
