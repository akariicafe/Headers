@class NSString, SCNMTLMesh, NSMutableArray;

@interface SCNGeometryVDMCDeformerInstance : NSObject <SCNGeometryDeformerInstance> {
    SCNMTLMesh *_subdivMesh;
    NSMutableArray *_meshElementData;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (unsigned long long)updateWithContext:(id)a0;
- (id)meshForDeformedTopology;

@end
