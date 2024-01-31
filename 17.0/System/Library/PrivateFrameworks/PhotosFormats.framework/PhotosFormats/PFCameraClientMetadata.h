@class AVCapturePhotoPrivateClientMetadata, NSArray, NSDictionary;

@interface PFCameraClientMetadata : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) AVCapturePhotoPrivateClientMetadata *privateClientMetadata;
@property (copy, nonatomic) NSArray *contactIDsInProximity;
@property (nonatomic) long long sharedLibraryMode;
@property (copy, nonatomic) NSDictionary *sharedLibraryDiagnostics;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithPrivateClientMetadata:(id)a0 contactIDsInProximity:(id)a1 sharedLibraryMode:(long long)a2;
- (id)initWithCoder:(id)a0;

@end
