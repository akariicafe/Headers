@class NSURL, PBUIImageOnDiskFormat;

@interface PBUIImageEncoder : NSObject

@property (copy, nonatomic) NSURL *url;
@property (copy, nonatomic) PBUIImageOnDiskFormat *format;

+ (void)decorateSurface:(id)a0 interfaceOrientation:(long long)a1 deviceOrientation:(long long)a2 scale:(double)a3;
+ (BOOL)setSnapshotDeviceOrientation:(long long)a0 forURL:(id)a1;
+ (BOOL)setSnapshotInterfaceOrientation:(long long)a0 forURL:(id)a1;
+ (BOOL)setSnapshotScale:(double)a0 forURL:(id)a1;
+ (BOOL)setSnapshotVersionForURL:(id)a0;
+ (long long)snapshotDeviceOrientationForURL:(id)a0;
+ (long long)snapshotInterfaceOrientationForURL:(id)a0;
+ (double)snapshotScaleForURL:(id)a0;
+ (unsigned char)snapshotVersionForURL:(id)a0;

- (id)createUIImageWithOrientation:(long long)a0 scale:(double)a1 error:(out id *)a2;
- (id)createUIImageWithError:(out id *)a0;
- (id)initWithURL:(id)a0 format:(id)a1;
- (id)saveUIImage:(id)a0 error:(id *)a1;
- (void)currentSnapshotInterfaceOrientation:(long long *)a0 outDeviceOrientation:(long long *)a1;
- (id)saveImage:(struct CGImage { } *)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)writeThenReadBackImage:(id)a0 error:(id *)a1;

@end
