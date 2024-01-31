@class PRSCodableImage, IOSurface, NSString, PRSServerPosterPath;

@interface PRSPosterSnapshot : NSObject <BSXPCSecureCoding>

@property (readonly, nonatomic) PRSCodableImage *codableImage;
@property (readonly, nonatomic) PRSServerPosterPath *switcherConfigurationPath;
@property (readonly, nonatomic) PRSServerPosterPath *homeScreenConfigurationPath;
@property (readonly, nonatomic) long long variant;
@property (readonly, nonatomic) long long configurationType;
@property (readonly, nonatomic) long long imageOrientation;
@property (readonly, nonatomic) struct CGImage { } *image;
@property (readonly, nonatomic) IOSurface *surface;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;

- (id)initWithBSXPCCoder:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)initWithIOSurface:(id)a0;
- (id)initWithCodableImage:(id)a0;
- (id)initWithCodableImage:(id)a0 imageOrientation:(long long)a1 switcherConfigurationPath:(id)a2 homeScreenConfigurationPath:(id)a3 variant:(long long)a4 configurationType:(long long)a5;
- (id)initWithIOSurface:(id)a0 imageOrientation:(long long)a1 switcherConfigurationPath:(id)a2 homeScreenConfigurationPath:(id)a3 variant:(long long)a4 configurationType:(long long)a5;

@end
