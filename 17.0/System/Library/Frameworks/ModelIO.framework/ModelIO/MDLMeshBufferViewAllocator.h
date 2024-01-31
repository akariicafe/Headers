@class NSString;

@interface MDLMeshBufferViewAllocator : MDLBufferViewAllocator <MDLMeshBufferAllocator>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)newBuffer:(unsigned long long)a0 type:(unsigned long long)a1;
- (id)decodeMeshBufferWithCoder:(id)a0 forKey:(id)a1;
- (id)decodeMeshBuffersWithCoder:(id)a0 forKey:(id)a1;
- (void)encodeMeshBuffer:(id)a0 withCoder:(id)a1 forKey:(id)a2;
- (void)encodeMeshBuffers:(id)a0 withCoder:(id)a1 forKey:(id)a2;
- (id)newBufferFromZone:(id)a0 data:(id)a1 type:(unsigned long long)a2;
- (id)newBufferFromZone:(id)a0 length:(unsigned long long)a1 type:(unsigned long long)a2;
- (id)newBufferViewAtRegionIndex:(long long)a0 type:(unsigned long long)a1;
- (id)newBufferViewAtRegionIndex:(long long)a0 type:(unsigned long long)a1 length:(long long)a2 offset:(long long)a3;
- (id)newBufferWithData:(id)a0 type:(unsigned long long)a1;
- (id)newZone:(unsigned long long)a0;
- (id)newZoneForBuffersWithSize:(id)a0 andType:(id)a1;

@end
