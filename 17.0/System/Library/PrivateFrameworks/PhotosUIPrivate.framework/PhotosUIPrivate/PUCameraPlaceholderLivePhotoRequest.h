@class PHAsset, NSString, UIImage, NSURL, NSValue, NSError;

@interface PUCameraPlaceholderLivePhotoRequest : NSObject

@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) NSURL *videoURL;
@property (retain, nonatomic) NSValue *stillDisplayTime;
@property (copy, nonatomic) NSString *filterName;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) BOOL imageRequestFinished;
@property (nonatomic) BOOL videoRequestFinished;
@property (readonly, nonatomic) PHAsset *asset;
@property (readonly, copy, nonatomic) id /* block */ resultHandler;

- (void).cxx_destruct;
- (id)initWithAsset:(id)a0 resultHandler:(id /* block */)a1;

@end
