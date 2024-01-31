@class NSString;

@interface AWDIDSDeviceConnectionDurationEvent : PBCodable <NSCopying> {
    struct { unsigned char clientInitToClientOpenSocketHandler : 1; unsigned char clientInitToDaemonOpenSocket : 1; unsigned char clientOpenSocketHandlerToIncomingFirstPacket : 1; unsigned char connectionInitToIncomingFirstPacket : 1; unsigned char daemonCompletionHandlerToClientOpenSocketCompletion : 1; unsigned char daemonCompletionHandlerToIncomingFirstPacket : 1; unsigned char daemonOpenSocketToDaemonCompletionHandler : 1; unsigned char timestamp : 1; unsigned char success : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasServiceName;
@property (retain, nonatomic) NSString *serviceName;
@property (nonatomic) BOOL hasSuccess;
@property (nonatomic) BOOL success;
@property (nonatomic) BOOL hasClientInitToDaemonOpenSocket;
@property (nonatomic) unsigned long long clientInitToDaemonOpenSocket;
@property (nonatomic) BOOL hasClientInitToClientOpenSocketHandler;
@property (nonatomic) unsigned long long clientInitToClientOpenSocketHandler;
@property (nonatomic) BOOL hasClientOpenSocketHandlerToIncomingFirstPacket;
@property (nonatomic) unsigned long long clientOpenSocketHandlerToIncomingFirstPacket;
@property (nonatomic) BOOL hasDaemonOpenSocketToDaemonCompletionHandler;
@property (nonatomic) unsigned long long daemonOpenSocketToDaemonCompletionHandler;
@property (nonatomic) BOOL hasDaemonCompletionHandlerToClientOpenSocketCompletion;
@property (nonatomic) unsigned long long daemonCompletionHandlerToClientOpenSocketCompletion;
@property (nonatomic) BOOL hasDaemonCompletionHandlerToIncomingFirstPacket;
@property (nonatomic) unsigned long long daemonCompletionHandlerToIncomingFirstPacket;
@property (nonatomic) BOOL hasConnectionInitToIncomingFirstPacket;
@property (nonatomic) unsigned long long connectionInitToIncomingFirstPacket;

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
