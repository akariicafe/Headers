@class MTRDevice;

@interface MTRClusterAccessControl : MTRCluster

@property (readonly, nonatomic) unsigned short endpoint;
@property (readonly, nonatomic) MTRDevice *device;

- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 endpoint:(unsigned short)a1 queue:(id)a2;
- (id)initWithDevice:(id)a0 endpointID:(id)a1 queue:(id)a2;
- (id)readAttributeACLWithParams:(id)a0;
- (id)readAttributeAcceptedCommandListWithParams:(id)a0;
- (id)readAttributeAccessControlEntriesPerFabricWithParams:(id)a0;
- (id)readAttributeAclWithParams:(id)a0;
- (id)readAttributeAttributeListWithParams:(id)a0;
- (id)readAttributeClusterRevisionWithParams:(id)a0;
- (id)readAttributeExtensionWithParams:(id)a0;
- (id)readAttributeFeatureMapWithParams:(id)a0;
- (id)readAttributeGeneratedCommandListWithParams:(id)a0;
- (id)readAttributeSubjectsPerAccessControlEntryWithParams:(id)a0;
- (id)readAttributeTargetsPerAccessControlEntryWithParams:(id)a0;
- (void)writeAttributeACLWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeACLWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;
- (void)writeAttributeAclWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeAclWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;
- (void)writeAttributeExtensionWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeExtensionWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;

@end
