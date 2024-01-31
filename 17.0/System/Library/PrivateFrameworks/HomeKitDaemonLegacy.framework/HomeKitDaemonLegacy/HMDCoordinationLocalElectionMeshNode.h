@class NSString, COMeshNode;

@interface HMDCoordinationLocalElectionMeshNode : NSObject <HMDLocalElectionMeshNode>

@property (readonly, weak) COMeshNode *meshNode;
@property (retain) NSString *idsIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithMeshNode:(id)a0;

@end
