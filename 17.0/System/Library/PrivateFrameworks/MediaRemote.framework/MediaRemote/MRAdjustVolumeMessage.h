@class NSString, MRRequestDetails;

@interface MRAdjustVolumeMessage : MRProtocolMessage

@property (readonly, nonatomic) long long adjustment;
@property (readonly, nonatomic) NSString *outputDeviceUID;
@property (readonly, nonatomic) MRRequestDetails *details;

- (unsigned long long)type;
- (id)initWithAdjustment:(long long)a0 outputDeviceUID:(id)a1 details:(id)a2;

@end
