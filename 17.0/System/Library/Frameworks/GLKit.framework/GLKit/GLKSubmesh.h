@class GLKMesh, GLKMeshBuffer, NSString;

@interface GLKSubmesh : NSObject

@property (readonly, nonatomic) unsigned int type;
@property (readonly, nonatomic) unsigned int mode;
@property (readonly, nonatomic) int elementCount;
@property (readonly, nonatomic) GLKMeshBuffer *elementBuffer;
@property (readonly, weak, nonatomic) GLKMesh *mesh;
@property (readonly, nonatomic) NSString *name;

- (void).cxx_destruct;
- (id)initWithMesh:(id)a0 submesh:(id)a1 error:(id *)a2;

@end
