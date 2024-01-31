@class NSString;

@interface AVCaptureDeferredPhotoProxy : AVCapturePhoto {
    NSString *_captureRequestIdentifier;
}

@property (copy, nonatomic) NSString *applicationIdentifier;
@property (readonly, copy) NSString *persistentStorageUUID;
@property (readonly) NSString *deferredPhotoIdentifier;

- (id)captureRequestIdentifier;
- (id)init;
- (struct { int x0; int x1; })dimensions;
- (void)dealloc;
- (id)initWithDeferredPhotoIdentifier:(id)a0 applicationIdentifier:(id)a1;
- (id)description;
- (id)initWithDeferredPhotoIdentifier:(id)a0;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (id)initWithTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 proxySurface:(struct __IOSurface { } *)a1 proxySurfaceSize:(unsigned long long)a2 proxyFileType:(id)a3 previewPhotoSurface:(struct __IOSurface { } *)a4 metadata:(id)a5 captureRequest:(id)a6 sequenceCount:(unsigned long long)a7 photoCount:(unsigned long long)a8 applicationIdentifier:(id)a9 captureRequestIdentifier:(id)a10 photoIdentifier:(id)a11 expectedPhotoProcessingFlags:(unsigned int)a12 sourceDeviceType:(id)a13;
- (id)initWithApplicationIdentifier:(id)a0 captureRequestIdentifier:(id)a1 photoIdentifier:(id)a2 timestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3 expectedPhotoProcessingFlags:(unsigned int)a4;

@end
