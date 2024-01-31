@class NSString, AVPlayerItem, UILabel;

@interface QLHapticItemViewController : QLAudioItemViewController <UIGestureRecognizerDelegate> {
    AVPlayerItem *_playerItem;
    UILabel *_missingAudioCustomLabel;
    double _elapsedTime;
    double _remainingTime;
}

@property BOOL hasAudioCustom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)play;
- (id)player;
- (void)viewDidLoad;
- (void)setupConstraints;
- (double)elapsedTime;
- (void).cxx_destruct;
- (id)playerItem;
- (void)_updateContentUnavailableConfigurationUsingState:(id)a0;
- (id)stringFromTimeInterval:(double)a0;
- (double)remainingTime;
- (void)loadPreviewControllerWithContents:(id)a0 context:(id)a1 completionHandler:(id /* block */)a2;
- (id)toolbarButtonsForTraitCollection:(id)a0;
- (BOOL)_assetIsDecodable:(id)a0;
- (void)_setupMissingAudioCustomLabel;
- (BOOL)canPlayHaptics;
- (struct opaqueCMSampleBuffer { } *)createSampleBufferFromAHAP:(id)a0 error:(id *)a1;
- (id)filterPatternDictionary:(id)a0;
- (id)iconImageWithConfiguration:(id)a0;
- (id)imageAccessibilityIdentifer;
- (id)makeAVAssetFromAHAP:(id)a0 error:(id *)a1;
- (id /* block */)playbackObserverBlock;
- (long long)playbackTimeFormat;
- (float)playerTimeObservationInterval;
- (void)showTimeLabelIfNeeded;
- (BOOL)usesScrubber;

@end
