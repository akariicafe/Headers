@interface SLImageDownsampling : NSObject

+ (id)createThumbnailWithData:(id)a0 adjustSmallestSideToSize:(unsigned long long)a1;
+ (id)downsampleImageData:(id)a0 toMaxByteSize:(unsigned long long)a1;
+ (void)downsampleImageData:(id)a0 toMaxByteSize:(unsigned long long)a1 resultsHandler:(id /* block */)a2;
+ (void)generateThumbnailFromImageData:(id)a0 adjustSmallestSideToSize:(unsigned long long)a1 resultsHandler:(id /* block */)a2;
+ (struct { long long x0; long long x1; })imageSizeWithData:(id)a0;

@end
