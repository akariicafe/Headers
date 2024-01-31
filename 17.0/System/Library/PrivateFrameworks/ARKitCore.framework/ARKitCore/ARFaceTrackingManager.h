@class NSUUID;

@interface ARFaceTrackingManager : NSObject {
    NSUUID *_singleUserAnchorIdentifier;
}

@property (readonly, nonatomic) long long maximumNumberOfTrackedFaces;

+ (void)initialize;
+ (BOOL)isSupported;

- (id)init;
- (void)dealloc;
- (id)processData:(id)a0;
- (void).cxx_destruct;
- (id)initWithOptions:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)faceTrackingOptionsFromImageData:(id)a0 withCallback:(id /* block */)a1;
- (id)initWithMaximumNumberOfTrackedFaces:(long long)a0 options:(id)a1;

@end
