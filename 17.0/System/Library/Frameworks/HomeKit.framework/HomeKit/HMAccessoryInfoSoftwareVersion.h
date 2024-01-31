@class HMFSoftwareVersion;

@interface HMAccessoryInfoSoftwareVersion : NSObject

@property (readonly, copy) HMFSoftwareVersion *softwareVersion;

- (unsigned long long)hash;
- (id)initWithProtoData:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithProtoPayload:(id)a0;
- (id)initWithSoftwareVersion:(id)a0;
- (id)protoData;
- (id)protoPayload;

@end
