@interface VCMockIDSDataChannelLinkContext : IDSDataChannelLinkContext {
    BOOL _forceNetworkCellular;
    unsigned short _localLinkFlags;
    unsigned short _estimatedPerPacketConstantOverhead;
}

@property (nonatomic) BOOL idsUPlusOneMode;
@property unsigned char networkType;
@property unsigned char remoteNetworkType;

- (id)init;
- (long long)connectionType;
- (unsigned int)RATType;
- (unsigned short)estimatedPerPacketConstantOverhead;
- (BOOL)isVirtualRelayLink;
- (unsigned short)localLinkFlags;
- (unsigned int)remoteRATType;

@end
