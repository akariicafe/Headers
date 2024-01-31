@class NSDictionary;

@interface PILongExposureRegistrationRequest : NURenderRequest

@property (copy, nonatomic) NSDictionary *recipe;
@property (nonatomic) struct { struct { long long x; long long y; } origin; struct { long long width; long long height; } size; } cleanAperture;

- (void)submit:(id /* block */)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)mediaComponentType;
- (id)newRenderJob;

@end
