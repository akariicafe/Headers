@interface _MTLIndirectDrawMeshThreadsArguments : NSObject {
    struct { unsigned long long width; unsigned long long height; unsigned long long depth; } threadsPerGrid;
    struct { unsigned long long width; unsigned long long height; unsigned long long depth; } threadsPerObjectThreadgroup;
    struct { unsigned long long width; unsigned long long height; unsigned long long depth; } threadsPerMeshThreadgroup;
}

@property (nonatomic) struct { unsigned long long width; unsigned long long height; unsigned long long depth; } threadsPerGrid;
@property (nonatomic) struct { unsigned long long width; unsigned long long height; unsigned long long depth; } threadsPerObjectThreadgroup;
@property (nonatomic) struct { unsigned long long width; unsigned long long height; unsigned long long depth; } threadsPerMeshThreadgroup;

@end
