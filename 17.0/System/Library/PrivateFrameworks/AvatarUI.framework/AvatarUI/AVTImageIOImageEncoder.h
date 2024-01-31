@class NSString;

@interface AVTImageIOImageEncoder : NSObject <AVTImageEncoder>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)typeIdentifier;
+ (id)addImageOptions;

- (id)fileExtension;
- (id)dataFromImage:(id)a0;
- (id)imageFromData:(id)a0 error:(id *)a1;
- (id)imageFromImageSource:(struct CGImageSource { } *)a0 error:(id *)a1;
- (id)imageFromURL:(id)a0 error:(id *)a1;

@end
