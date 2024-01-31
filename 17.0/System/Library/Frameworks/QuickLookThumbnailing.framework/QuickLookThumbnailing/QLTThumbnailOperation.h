@class UIImage, NSError;

@interface QLTThumbnailOperation : QLThumbnailRequestOperation

@property (readonly) UIImage *image;
@property (readonly) NSError *error;
@property (copy) id /* block */ needsAdditionalTime;

- (void).cxx_destruct;

@end
