@class NSArray, NSString;
@protocol NUMutableBufferImage, NUBufferImage;

@interface PIRetouchSourceNode : NUCISourceNode {
    id<NUMutableBufferImage> _retouchImage;
    id<NUBufferImage> _renderedImage;
    NSArray *_strokes;
    NSString *_cacheKey;
}

+ (id)intermediateCacheForSubsample:(BOOL)a0;

- (void).cxx_destruct;
- (void)provideImageData:(void *)a0 bytesPerRow:(unsigned long long)a1 origin:(unsigned long long)a2 :(unsigned long long)a3 size:(unsigned long long)a4 :(unsigned long long)a5 userInfo:(id)a6;
- (void)_performRetouchIfNeeded;
- (void)applyRetouchStrokes:(id)a0 toImage:(id)a1;
- (id)initWithImage:(id)a0 identifier:(id)a1 orientation:(long long)a2;
- (id)initWithImage:(id)a0 settings:(id)a1 orientation:(long long)a2;
- (id)initWithInputImage:(id)a0 retouchStrokes:(id)a1 detectedFaces:(id)a2 cacheKey:(id)a3;

@end
