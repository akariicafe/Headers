@class NSString, NSDictionary, SYLogErrorInfo, NSMutableArray;

@interface SYLogSessionState : PBCodable <NSCopying> {
    struct { unsigned char fullSessionTimeout : 1; unsigned char perMessageTimeout : 1; unsigned char canRestart : 1; unsigned char canRollback : 1; unsigned char canceled : 1; unsigned char isReset : 1; } _has;
}

@property (retain, nonatomic) NSDictionary *cocoaTransportOptions;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) int state;
@property (nonatomic) BOOL isSending;
@property (nonatomic) BOOL hasIsReset;
@property (nonatomic) BOOL isReset;
@property (nonatomic) BOOL hasPerMessageTimeout;
@property (nonatomic) double perMessageTimeout;
@property (nonatomic) BOOL hasFullSessionTimeout;
@property (nonatomic) double fullSessionTimeout;
@property (nonatomic) unsigned long long maxConcurrentMessages;
@property (readonly, nonatomic) BOOL hasError;
@property (retain, nonatomic) SYLogErrorInfo *error;
@property (nonatomic) BOOL hasCanRestart;
@property (nonatomic) BOOL canRestart;
@property (nonatomic) BOOL hasCanRollback;
@property (nonatomic) BOOL canRollback;
@property (nonatomic) BOOL hasCanceled;
@property (nonatomic) BOOL canceled;
@property (retain, nonatomic) NSMutableArray *transportOptions;
@property (retain, nonatomic) NSMutableArray *peers;
@property (readonly, nonatomic) BOOL hasReason;
@property (retain, nonatomic) NSString *reason;

+ (Class)peerType;
+ (Class)transportOptionsType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (id)stateAsString:(int)a0;
- (id)transportOptionsAtIndex:(unsigned long long)a0;
- (void)addTransportOptions:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)transportOptionsCount;
- (id)description;
- (void).cxx_destruct;
- (void)clearTransportOptions;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsState:(id)a0;
- (void)addPeer:(id)a0;
- (void)clearPeers;
- (id)peerAtIndex:(unsigned long long)a0;
- (unsigned long long)peersCount;

@end
