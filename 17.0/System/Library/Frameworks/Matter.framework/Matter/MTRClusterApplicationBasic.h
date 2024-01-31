@class MTRDevice;

@interface MTRClusterApplicationBasic : MTRCluster

@property (readonly, nonatomic) unsigned short endpoint;
@property (readonly, nonatomic) MTRDevice *device;

- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 endpoint:(unsigned short)a1 queue:(id)a2;
- (id)initWithDevice:(id)a0 endpointID:(id)a1 queue:(id)a2;
- (id)readAttributeAcceptedCommandListWithParams:(id)a0;
- (id)readAttributeAllowedVendorListWithParams:(id)a0;
- (id)readAttributeApplicationNameWithParams:(id)a0;
- (id)readAttributeApplicationVersionWithParams:(id)a0;
- (id)readAttributeApplicationWithParams:(id)a0;
- (id)readAttributeAttributeListWithParams:(id)a0;
- (id)readAttributeClusterRevisionWithParams:(id)a0;
- (id)readAttributeFeatureMapWithParams:(id)a0;
- (id)readAttributeGeneratedCommandListWithParams:(id)a0;
- (id)readAttributeProductIDWithParams:(id)a0;
- (id)readAttributeStatusWithParams:(id)a0;
- (id)readAttributeVendorIDWithParams:(id)a0;
- (id)readAttributeVendorNameWithParams:(id)a0;

@end
