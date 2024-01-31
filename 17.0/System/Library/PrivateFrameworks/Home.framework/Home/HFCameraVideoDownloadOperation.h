@class NSURL, HFCameraAnalyticsCameraTimelapseLoadEvent, HMCameraClip;
@protocol HFCameraVideoDownloaderDelegate;

@interface HFCameraVideoDownloadOperation : NSBlockOperation

@property (retain, nonatomic) HFCameraAnalyticsCameraTimelapseLoadEvent *timelapseLoadEvent;
@property (weak, nonatomic) id<HFCameraVideoDownloaderDelegate> delegate;
@property (copy, nonatomic) id /* block */ downloadBlock;
@property (retain, nonatomic) HMCameraClip *clip;
@property (retain, nonatomic) NSURL *destinationURL;
@property (nonatomic) BOOL fileAlreadyExists;

+ (id)downloadOperationForClip:(id)a0;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)fileDownloadFailedWithError:(id)a0;
- (void)fileDownloadFinishedWithElapsedTime:(double)a0;
- (void)fileDownloadNotNeeded;
- (void)fileDownloadProgress:(unsigned long long)a0;

@end
