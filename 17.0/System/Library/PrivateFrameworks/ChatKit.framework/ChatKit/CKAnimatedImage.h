@class NSString, UIImage, NSArray;

@interface CKAnimatedImage : NSObject <IMAnimatedImageProtocol>

@property (class, readonly, nonatomic) NSString *filenameExtension;

@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSArray *durations;
@property (nonatomic) long long previouslyReturnedFrameIndexHint;
@property (nonatomic) double animationStartTimeOffset;
@property (readonly, nonatomic) NSArray *frames;
@property (readonly, copy, nonatomic) NSArray *frameStartTimestamps;
@property (readonly, copy, nonatomic) NSArray *frameEndTimestamps;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;
@property (readonly, nonatomic) double scale;

+ (id)ASTCDataForImagesWithDurations:(id)a0 imageProvider:(id /* block */)a1;
+ (id)imageWithContentsOfCPBitmapURL:(id)a0;
+ (BOOL)_writeImagesWithDurations:(id)a0 toCPBitmapURL:(id)a1 error:(id *)a2 imageProvider:(id /* block */)a3 frameProcessor:(id /* block */)a4;
+ (BOOL)_writeImagesWithDurations:(id)a0 toOutputStream:(id)a1 error:(id *)a2 imageProvider:(id /* block */)a3 frameProcessor:(id /* block */)a4;
+ (id)animatedImageWithASTCData:(id)a0;
+ (id)animatedImageWithContentsOfASTCURL:(id)a0;
+ (id)animatedImageWithContentsOfCPBitmapURL:(id)a0;
+ (BOOL)writeImagesWithDurations:(id)a0 toASTCURL:(id)a1 error:(id *)a2 imageProvider:(id /* block */)a3 frameProcessor:(id /* block */)a4;
+ (BOOL)writeImagesWithDurations:(id)a0 toASTCURL:(id)a1 imageProvider:(id /* block */)a2;
+ (BOOL)writeImagesWithDurations:(id)a0 toCPBitmapURL:(id)a1 error:(id *)a2 imageProvider:(id /* block */)a3 frameProcessor:(id /* block */)a4;
+ (BOOL)writeImagesWithDurations:(id)a0 toCPBitmapURL:(id)a1 imageProvider:(id /* block */)a2;

- (id)description;
- (void).cxx_destruct;
- (BOOL)writeToASTCURL:(id)a0;
- (void)_calculateFrameTimestamps;
- (id)_initWithImage:(id)a0 durations:(id)a1;
- (double)endTimestampForFrameIndex:(unsigned long long)a0;
- (id)frameForAnimationTime:(double)a0;
- (long long)frameIndexForAnimationTime:(double)a0;
- (id)initWithImages:(id)a0 durations:(id)a1;
- (double)timeInLoopForTime:(double)a0;
- (BOOL)writeToCPBitmapURL:(id)a0;

@end
