@interface PXStoryThumbnailImageGenerator : NSObject

+ (id)generateImageWithStoryConfiguration:(id)a0 size:(struct CGSize { double x0; double x1; })a1 displayScale:(double)a2 convertToYUV:(BOOL)a3 timeoutWaitingForNonDegraded:(double)a4;

- (id)init;

@end
