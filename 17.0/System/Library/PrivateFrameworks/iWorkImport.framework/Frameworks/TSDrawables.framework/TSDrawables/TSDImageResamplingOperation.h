@class TSDImageProvider, NSString, TSPObjectContext;

@interface TSDImageResamplingOperation : NSObject

@property (retain, nonatomic) TSDImageProvider *imageProvider;
@property (nonatomic) struct CGSize { double width; double height; } desiredSize;
@property (copy, nonatomic) NSString *displayName;
@property (retain, nonatomic) TSPObjectContext *objectContext;
@property (nonatomic) struct CGSize { double width; double height; } desiredAlternateSizeIfConvertedToPNG;

- (id)init;
- (void).cxx_destruct;
- (id)initWithImageProvider:(id)a0 desiredSize:(struct CGSize { double x0; double x1; })a1;
- (id)performResampleOperationWithResampleOptions:(unsigned long long)a0 bitmapContextOptions:(unsigned long long)a1;

@end
