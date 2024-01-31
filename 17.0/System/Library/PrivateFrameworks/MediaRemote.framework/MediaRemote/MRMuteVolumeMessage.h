@class NSString, MRRequestDetails;

@interface MRMuteVolumeMessage : MRProtocolMessage

@property (readonly, nonatomic, getter=isMuted) BOOL muted;
@property (readonly, nonatomic) NSString *outputDeviceUID;
@property (readonly, nonatomic) MRRequestDetails *details;

- (unsigned long long)type;
- (id)initWithMuted:(BOOL)a0 outputDeviceUID:(id)a1 details:(id)a2;

@end
