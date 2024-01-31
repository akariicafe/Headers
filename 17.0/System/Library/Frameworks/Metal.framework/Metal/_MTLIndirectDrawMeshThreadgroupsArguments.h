@interface _MTLIndirectDrawMeshThreadgroupsArguments : NSObject {
    struct { unsigned long long width; unsigned long long height; unsigned long long depth; } threadgroupsPerGrid;
    struct { unsigned long long width; unsigned long long height; unsigned long long depth; } threadsPerObjectThreadgroup;
    struct { unsigned long long width; unsigned long long height; unsigned long long depth; } threadsPerMeshThreadgroup;
}

@property (nonatomic) struct { unsigned long long width; unsigned long long height; unsigned long long depth; } threadgroupsPerGrid;
@property (nonatomic) struct { unsigned long long width; unsigned long long height; unsigned long long depth; } threadsPerObjectThreadgroup;
@property (nonatomic) struct { unsigned long long width; unsigned long long height; unsigned long long depth; } threadsPerMeshThreadgroup;

@end
