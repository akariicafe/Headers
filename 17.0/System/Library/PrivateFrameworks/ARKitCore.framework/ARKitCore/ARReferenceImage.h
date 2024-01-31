@class NSUUID, NSString, ARReferenceImageCachedError, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface ARReferenceImage : NSObject <NSSecureCoding> {
    NSObject<OS_dispatch_queue> *_verificationQueue;
    NSObject<OS_dispatch_semaphore> *_verificationQueueSemaphore;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property double estimatedQuality;
@property (retain) ARReferenceImageCachedError *cachedVerificationError;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } imageSize;
@property (readonly, nonatomic) struct __CVBuffer { } *pixelBuffer;
@property (readonly, nonatomic) struct __CVBuffer { } *alphaMask;
@property (readonly, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) struct CGSize { double width; double height; } physicalSize;
@property (readonly, nonatomic) NSString *resourceGroupName;

+ (id)referenceImagesInGroupNamed:(id)a0 bundle:(id)a1;
+ (id)referenceImagesInGroupNamed:(id)a0 catalog:(id)a1;
+ (id)referenceImagesInGroupNamed:(id)a0 catalogName:(id)a1 bundle:(id)a2;
+ (id)referenceImagesInGroupNamed:(id)a0 catalogURL:(id)a1;

- (id)initWithIdentifier:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)shortDebugDescription;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)validateWithCompletionHandler:(id /* block */)a0;
- (id)initWithCIImage:(id)a0 orientation:(unsigned int)a1 physicalWidth:(double)a2 alphaInfo:(unsigned int *)a3 addPadding:(BOOL)a4;
- (void)estimateQualityWithCompletionHandler:(id /* block */)a0;
- (id)initWithCGImage:(struct CGImage { } *)a0 orientation:(unsigned int)a1 physicalWidth:(double)a2;
- (id)initWithCGImage:(struct CGImage { } *)a0 orientation:(unsigned int)a1 physicalWidth:(double)a2 addPadding:(BOOL)a3;
- (id)initWithPixelBuffer:(struct __CVBuffer { } *)a0 orientation:(unsigned int)a1 physicalWidth:(double)a2;
- (id)initWithPixelBuffer:(struct __CVBuffer { } *)a0 orientation:(unsigned int)a1 physicalWidth:(double)a2 addPadding:(BOOL)a3;
- (void)setResourceGroupName:(id)a0;

@end
