@class NSString, PFVideoAVObjectBuilder, NSTimer, AVAssetExportSession, NSObject, PLProgressView;
@protocol PLVideoRemakerDelegate;

@interface PLVideoRemaker : NSObject {
    NSString *_trimmedPath;
    AVAssetExportSession *_exportSession;
    float _percentComplete;
    NSTimer *_progressTimer;
    PLProgressView *_progressView;
}

@property (readonly, retain, nonatomic) PFVideoAVObjectBuilder *_videoAVObjectBuilder;
@property (weak, nonatomic) NSObject<PLVideoRemakerDelegate> *delegate;
@property (copy, nonatomic) id /* block */ progressHandler;
@property (nonatomic) BOOL shouldExportToPhotoDataDirectory;
@property (copy, nonatomic) NSString *exportPresetOverride;
@property (readonly, nonatomic) NSString *exportPreset;
@property (nonatomic) double duration;
@property (nonatomic) int mode;
@property (nonatomic) double trimStartTime;
@property (nonatomic) double trimEndTime;
@property (copy, nonatomic) NSString *customAccessibilityLabel;

+ (double)maximumDurationForTrimMode:(int)a0;
+ (long long)approximateByteSizeForMode:(int)a0 duration:(double)a1;
+ (long long)fileLengthLimitForRemakerMode:(int)a0;
+ (int)getHDRemakerModeForMode:(int)a0;
+ (int)getSDRemakerModeForMode:(int)a0;

- (id)progressView;
- (void)dealloc;
- (void)_updateProgress;
- (void).cxx_destruct;
- (void)cancel;
- (id)_metadata;
- (id)initWithAVAsset:(id)a0;
- (id)initWithManagedAsset:(id)a0 applyVideoAdjustments:(BOOL)a1;
- (void)remake;
- (void)_didEndRemakingWithTemporaryPath:(id)a0;
- (void)_exportCompletedWithSuccess:(BOOL)a0;
- (id)_fileFormatForURL:(id)a0;
- (void)_removeProgressTimer;
- (void)_resetProgressTimer;
- (id)initWithPublishingMedia:(id)a0;
- (id)messageForRemakingProgress;

@end
