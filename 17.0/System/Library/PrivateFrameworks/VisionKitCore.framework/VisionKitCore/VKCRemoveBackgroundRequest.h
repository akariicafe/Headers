@class NSString, NSIndexSet, VKCImageAnalyzerRequest, NSNumber;

@interface VKCRemoveBackgroundRequest : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    int _requestID;
    struct __CVBuffer { } *_pixelBuffer;
}

@property (readonly, nonatomic) VKCImageAnalyzerRequest *photosRequest;
@property (nonatomic) BOOL performInPlace;
@property (readonly, nonatomic) struct CGSize { double width; double height; } size;
@property (readonly, nonatomic) struct __CVBuffer { } *pixelBuffer;
@property (readonly, nonatomic) NSString *identifier;
@property (nonatomic) int MADRequestID;
@property (retain, nonatomic) NSNumber *animatedStickerScore;
@property (readonly, nonatomic) struct CGImage { } *CGImage;
@property (readonly, nonatomic) long long imageOrientation;
@property (nonatomic) BOOL cropToFit;
@property (nonatomic) BOOL maskOnly;
@property (retain, nonatomic) NSIndexSet *selectedIndexSet;
@property (retain, nonatomic) NSNumber *VIImageType;

+ (id)requestWithImage:(struct CGImage { } *)a0 orientation:(long long)a1 canResize:(BOOL)a2;

- (void)dealloc;
- (id)initWithCGImage:(struct CGImage { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)createMADRequest;
- (id)initWithCGImage:(struct CGImage { } *)a0 orientation:(long long)a1;
- (id)initWithPhotosAnalyzerRequest:(id)a0;

@end
