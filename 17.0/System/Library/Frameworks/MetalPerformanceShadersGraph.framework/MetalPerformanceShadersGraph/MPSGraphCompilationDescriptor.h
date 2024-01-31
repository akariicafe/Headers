@class NSObject;
@protocol OS_dispatch_queue;

@interface MPSGraphCompilationDescriptor : MPSGraphObject <NSCopying>

@property unsigned long long compilerOptions;
@property unsigned long long aneCompilerSpatialSplitting;
@property BOOL enableANEFWToFWSignal;
@property BOOL enableANELateLatch;
@property BOOL printANEPlacementAnalysis;
@property (nonatomic) unsigned long long preferredDevice;
@property (nonatomic) unsigned long long allowedComputeDevices;
@property (nonatomic) unsigned long long optimizationLevel;
@property (nonatomic) BOOL waitForCompilationCompletion;
@property (copy) id /* block */ compilationCompletionHandler;
@property (retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) unsigned long long optimizationProfile;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualTo:(id)a0;
- (void)disableTypeInference;
- (void)enableDevicePlacement;
- (void)enableFileBackedConstants;
- (struct vector<mlir::NamedAttribute, std::allocator<mlir::NamedAttribute>> { struct NamedAttribute *x0; struct NamedAttribute *x1; struct __compressed_pair<mlir::NamedAttribute *, std::allocator<mlir::NamedAttribute>> { struct NamedAttribute *x0; } x2; })getNamedAttrArray:(void *)a0 device:(id)a1;

@end
