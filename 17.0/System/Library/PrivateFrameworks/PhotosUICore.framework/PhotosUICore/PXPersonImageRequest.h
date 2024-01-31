@class NSTimer;
@protocol PXPerson;

@interface PXPersonImageRequest : NSObject

@property (retain, nonatomic) NSTimer *imageLoadInvalidationTimer;
@property (nonatomic) unsigned long long imageRequestTag;
@property (readonly, nonatomic) id<PXPerson> person;

- (void)dealloc;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithPerson:(id)a0;
- (void)requestFaceCropWithOptions:(id)a0 timeout:(double)a1 resultHandler:(id /* block */)a2;
- (void)requestImageWithTargetSize:(struct CGSize { double x0; double x1; })a0 cropFactor:(unsigned long long)a1 cacheResult:(BOOL)a2 boundFaceRect:(BOOL)a3 timeout:(double)a4 withCompletion:(id /* block */)a5;

@end
