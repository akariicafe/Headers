@interface VNANFDMultiDetectorANSTv1 : VNANFDMultiDetectorANODv4

@property (class, readonly, nonatomic) BOOL supportsExecution;

+ (id)supportedComputeStageDevicesForOptions:(id)a0 error:(id *)a1;
+ (BOOL)shouldAlignFacesForRequestWithSpecifier:(id)a0;
+ (Class)detectorClass;

@end
