@class EspressoFDOverfeatNetwork;

@interface EspressoDCNEspressoOverfeatDetector : NSObject {
    int tileSizeScaleFactor;
    int tileDimension;
    int localFaceMerging;
    void *face_list;
}

@property (retain, nonatomic) EspressoFDOverfeatNetwork *enet;
@property (nonatomic) double confidenceThreshold;
@property (nonatomic) double minBoundingBoxThreshold;

- (void)commonInit;
- (id)init;
- (id)initWithNetwork:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithOptions:(id)a0;
- (id)getDescription;
- (double)compareObject:(id)a0 withObject:(id)a1 error:(id *)a2;
- (void)computeBBoxUsingProb:(struct shared_ptr<Espresso::blob<float, 3>> { void *x0; struct __shared_weak_count *x1; })a0 box:(struct shared_ptr<Espresso::blob<float, 3>> { void *x0; struct __shared_weak_count *x1; })a1 andScalefactor:(float)a2 padX:(float)a3 padY:(float)a4;
- (void)fillFaceList;
- (id)getFacesFromNetworkResultOriginalWidth:(float)a0 originalHeight:(float)a1;
- (void)mergeFaceList;

@end
