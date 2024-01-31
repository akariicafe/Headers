@class NSString, MRRequestDetails;

@interface MRSetVolumeMessage : MRProtocolMessage

@property (readonly, nonatomic) NSString *outputDeviceUID;
@property (readonly, nonatomic) float volume;
@property (readonly, nonatomic) MRRequestDetails *details;

- (id)initWithVolume:(float)a0;
- (unsigned long long)type;
- (id)initWithVolume:(float)a0 outputDeviceUID:(id)a1 details:(id)a2;

@end
