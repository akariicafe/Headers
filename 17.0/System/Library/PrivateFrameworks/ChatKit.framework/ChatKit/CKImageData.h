@class NSString, NSData, NSURL, UIImage;

@interface CKImageData : NSObject

@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) struct CGImageSource { } *imageSource;
@property (nonatomic) unsigned long long count;
@property (nonatomic) long long orientation;
@property (nonatomic) struct CGSize { double width; double height; } pxSize;
@property (nonatomic) BOOL initializedProperties;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } ptSize;
@property (readonly, copy, nonatomic) NSString *UTIType;
@property (readonly, copy, nonatomic) NSString *MIMEType;

+ (BOOL)supportsASTC;
+ (id)UTITypeForData:(id)a0;

- (id)initWithURL:(id)a0;
- (void)dealloc;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (void)_initializeProperties;
- (id)_defaultDurationsWithMaxCount:(unsigned long long)a0;
- (id)_thumbnailFillToSize:(struct CGSize { double x0; double x1; })a0 atIndex:(unsigned long long)a1;
- (id)_thumbnailFitToSize:(struct CGSize { double x0; double x1; })a0 atIndex:(unsigned long long)a1;
- (id)durationsWithMaxCount:(unsigned long long)a0;
- (struct CGSize { double x0; double x1; })sizeForImageSource:(struct CGImageSource { } *)a0 index:(unsigned long long)a1;
- (id)thumbnailAtIndex:(unsigned long long)a0 fillToSize:(struct CGSize { double x0; double x1; })a1 maxCount:(unsigned long long)a2;
- (id)thumbnailFillToSize:(struct CGSize { double x0; double x1; })a0;
- (id)thumbnailFillToSizeCropping:(struct CGSize { double x0; double x1; })a0;
- (id)thumbnailFitToSize:(struct CGSize { double x0; double x1; })a0;
- (id)thumbnailsFillToSize:(struct CGSize { double x0; double x1; })a0 maxCount:(unsigned long long)a1;
- (id)thumbnailsFitToSize:(struct CGSize { double x0; double x1; })a0 maxCount:(unsigned long long)a1;

@end
