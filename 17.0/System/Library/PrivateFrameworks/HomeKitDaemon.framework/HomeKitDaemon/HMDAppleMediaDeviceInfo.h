@class NSUUID, NSString, HMDDeviceCapabilities;

@interface HMDAppleMediaDeviceInfo : HMFObject

@property (retain, nonatomic) NSUUID *modelID;
@property (readonly, nonatomic) NSString *deviceID;
@property (readonly, nonatomic) NSUUID *mediaRouteUUID;
@property (readonly, nonatomic) HMDDeviceCapabilities *capabilities;

- (id)init;
- (id)initWithPayload:(id)a0;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)asPayload;
- (id)initWithDeviceID:(id)a0 mediaRouteID:(id)a1 deviceCapabilities:(id)a2;

@end
