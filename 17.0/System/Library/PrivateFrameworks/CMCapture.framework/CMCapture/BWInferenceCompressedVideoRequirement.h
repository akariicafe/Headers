@class BWInferenceVideoRequirement;

@interface BWInferenceCompressedVideoRequirement : BWInferenceVideoRequirement

@property (readonly, nonatomic) BWInferenceVideoRequirement *uncompressedRequirement;

+ (id)newRequirementWithUncompressedRequirement:(id)a0 supportedCompressionType:(int)a1 supportedLossyCompressionLevel:(int)a2;

- (void)dealloc;
- (BOOL)isSatisfiedByRequirement:(id)a0;
- (unsigned long long)satisfactionHash;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
