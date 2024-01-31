@class NSDictionary;

@interface VCConnection : NSObject {
    unsigned short _linkFlags;
    unsigned short _remoteLinkFlags;
    unsigned long long _constantConnectionOverhead;
    unsigned char _connectionType;
    int _priority;
    struct tagVCConnectionProtocolRealtimeVTable { void /* function */ *matchesSourceDestinationInfo; void /* function */ *sourceDestinationInfo; void /* function */ *isRelay; void /* function */ *equal; void /* function */ *isLocalOnCellular; void /* function */ *isRemoteOnCellular; void /* function */ *isIPv6; void /* function */ *localCellTech; void /* function */ *setLocalCellTech; void /* function */ *remoteCellTech; void /* function */ *setRemoteCellTech; void /* function */ *copyDescription; void /* function */ *isLocalOnWiFi; void /* function */ *isRemoteOnWiFi; void /* function */ *isOnSameInterfacesWithConnection; void /* function */ *isEndToEndLink; void /* function */ *connectionID; void /* function */ *isLocalExpensive; void /* function */ *isLocalConstrained; void /* function */ *isRemoteExpensive; void /* function */ *isRemoteConstrained; void /* function */ *reportingIPVersion; void /* function */ *reportingQRServerConfig; void /* function */ *isHopByHopEncryptionSupported; } _vTable;
    NSDictionary *_connectionSelectionPriorities;
}

- (id)init;
- (void)dealloc;
- (void)setLinkFlags:(unsigned short)a0;
- (long long)compare:(id)a0 isPrimary:(BOOL)a1 selectionPolicy:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; } *)a2;
- (long long)compareConnectionTypePriority:(id)a0 selectionPolicy:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; } *)a1;
- (long long)compareE2EPriority:(id)a0 selectionPolicy:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; } *)a1;
- (long long)compareInterfacePriority:(id)a0 isPrimary:(BOOL)a1;
- (long long)compareIpVersionPriority:(id)a0 selectionPolicy:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; } *)a1;
- (long long)compareVpnPriority:(id)a0 selectionPolicy:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; } *)a1;
- (id)getConnectionSelectionPriorities;
- (void)setRemoteLinkFlags:(unsigned short)a0;
- (void)setUpVTable;

@end
