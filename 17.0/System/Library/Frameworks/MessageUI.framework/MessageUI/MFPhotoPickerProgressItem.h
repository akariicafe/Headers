@class AVAssetExportSession;

@interface MFPhotoPickerProgressItem : NSObject

@property (nonatomic) double progress;
@property (nonatomic) int imageRequestID;
@property (retain, nonatomic) AVAssetExportSession *exportSession;

- (id)description;
- (void).cxx_destruct;

@end
