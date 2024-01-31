@class NSString;

@interface AWDIDSSessionEnded : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char callDuration : 1; unsigned char conferenceMiscError : 1; unsigned char connectDuration : 1; unsigned char connectionType : 1; unsigned char currentNatType : 1; unsigned char dataRate : 1; unsigned char endedReason : 1; unsigned char gameKitError : 1; unsigned char genericError : 1; unsigned char gksError : 1; unsigned char gksReturnCode : 1; unsigned char isInitiator : 1; unsigned char isNetworkActive : 1; unsigned char isNetworkEnabled : 1; unsigned char isNetworkReachable : 1; unsigned char linkQuality : 1; unsigned char localNetworkConnection : 1; unsigned char networkCheckResult : 1; unsigned char relayConnectDuration : 1; unsigned char remoteNatType : 1; unsigned char remoteNetworkConnection : 1; unsigned char usesRelay : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasGuid;
@property (retain, nonatomic) NSString *guid;
@property (nonatomic) BOOL hasEndedReason;
@property (nonatomic) unsigned int endedReason;
@property (nonatomic) BOOL hasGenericError;
@property (nonatomic) int genericError;
@property (nonatomic) BOOL hasGameKitError;
@property (nonatomic) unsigned int gameKitError;
@property (nonatomic) BOOL hasConferenceMiscError;
@property (nonatomic) unsigned int conferenceMiscError;
@property (nonatomic) BOOL hasCallDuration;
@property (nonatomic) unsigned int callDuration;
@property (nonatomic) BOOL hasIsNetworkEnabled;
@property (nonatomic) unsigned int isNetworkEnabled;
@property (nonatomic) BOOL hasIsNetworkActive;
@property (nonatomic) unsigned int isNetworkActive;
@property (nonatomic) BOOL hasIsNetworkReachable;
@property (nonatomic) unsigned int isNetworkReachable;
@property (nonatomic) BOOL hasNetworkCheckResult;
@property (nonatomic) unsigned int networkCheckResult;
@property (nonatomic) BOOL hasDataRate;
@property (nonatomic) unsigned int dataRate;
@property (nonatomic) BOOL hasGksError;
@property (nonatomic) int gksError;
@property (nonatomic) BOOL hasConnectDuration;
@property (nonatomic) unsigned int connectDuration;
@property (nonatomic) BOOL hasRemoteNetworkConnection;
@property (nonatomic) unsigned int remoteNetworkConnection;
@property (nonatomic) BOOL hasLocalNetworkConnection;
@property (nonatomic) unsigned int localNetworkConnection;
@property (nonatomic) BOOL hasConnectionType;
@property (nonatomic) unsigned int connectionType;
@property (nonatomic) BOOL hasUsesRelay;
@property (nonatomic) unsigned int usesRelay;
@property (nonatomic) BOOL hasCurrentNatType;
@property (nonatomic) unsigned int currentNatType;
@property (nonatomic) BOOL hasRemoteNatType;
@property (nonatomic) unsigned int remoteNatType;
@property (nonatomic) BOOL hasRelayConnectDuration;
@property (nonatomic) unsigned int relayConnectDuration;
@property (nonatomic) BOOL hasIsInitiator;
@property (nonatomic) unsigned int isInitiator;
@property (nonatomic) BOOL hasLinkQuality;
@property (nonatomic) int linkQuality;
@property (nonatomic) BOOL hasGksReturnCode;
@property (nonatomic) int gksReturnCode;

- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
