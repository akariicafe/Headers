@class VUIImage, NSError, NSMutableArray, VUIMediaInfo;

@interface VUIMediaInfoImageFetchOperation : VUIAsynchronousOperation

@property (retain, nonatomic) NSMutableArray *completionBlocks;
@property (retain, nonatomic) VUIMediaInfo *mediaInfo;
@property (retain, nonatomic) VUIImage *image;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) BOOL imageLoadFinished;

- (void)addCompletion:(id /* block */)a0;
- (void)executionDidBegin;
- (void).cxx_destruct;
- (void)cancel;
- (void)fetchImageWithCompletion:(id /* block */)a0;
- (id)imageProxy;
- (id)initWithMediaInfo:(id)a0;

@end
