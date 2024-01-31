@class AWDMailError;

@interface AWDMailAutoFetchReport : PBCodable <NSCopying> {
    struct { unsigned char bucketedLocalNonDeletedCount : 1; unsigned char duration : 1; unsigned char fetchSize : 1; unsigned char numMessagesFetched : 1; unsigned char options : 1; unsigned char timestamp : 1; unsigned char emailProvider : 1; unsigned char mailboxType : 1; unsigned char newMessagesState : 1; unsigned char protocol : 1; unsigned char totalBytesReceived : 1; unsigned char totalBytesSent : 1; unsigned char trigger : 1; unsigned char didTimeout : 1; unsigned char foreground : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasProtocol;
@property (nonatomic) int protocol;
@property (nonatomic) BOOL hasEmailProvider;
@property (nonatomic) int emailProvider;
@property (nonatomic) BOOL hasMailboxType;
@property (nonatomic) int mailboxType;
@property (readonly, nonatomic) BOOL hasMailError;
@property (retain, nonatomic) AWDMailError *mailError;
@property (nonatomic) BOOL hasTrigger;
@property (nonatomic) int trigger;
@property (nonatomic) BOOL hasNewMessagesState;
@property (nonatomic) int newMessagesState;
@property (nonatomic) BOOL hasForeground;
@property (nonatomic) BOOL foreground;
@property (nonatomic) BOOL hasDidTimeout;
@property (nonatomic) BOOL didTimeout;
@property (nonatomic) BOOL hasOptions;
@property (nonatomic) unsigned long long options;
@property (nonatomic) BOOL hasFetchSize;
@property (nonatomic) unsigned long long fetchSize;
@property (nonatomic) BOOL hasNumMessagesFetched;
@property (nonatomic) unsigned long long numMessagesFetched;
@property (nonatomic) BOOL hasTotalBytesSent;
@property (nonatomic) int totalBytesSent;
@property (nonatomic) BOOL hasTotalBytesReceived;
@property (nonatomic) int totalBytesReceived;
@property (nonatomic) BOOL hasBucketedLocalNonDeletedCount;
@property (nonatomic) unsigned long long bucketedLocalNonDeletedCount;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) unsigned long long duration;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsTrigger:(id)a0;
- (id)triggerAsString:(int)a0;
- (int)StringAsProtocol:(id)a0;
- (int)StringAsTotalBytesReceived:(id)a0;
- (int)StringAsEmailProvider:(id)a0;
- (int)StringAsMailboxType:(id)a0;
- (int)StringAsNewMessagesState:(id)a0;
- (int)StringAsTotalBytesSent:(id)a0;
- (id)emailProviderAsString:(int)a0;
- (id)mailboxTypeAsString:(int)a0;
- (id)newMessagesStateAsString:(int)a0;
- (id)protocolAsString:(int)a0;
- (id)totalBytesReceivedAsString:(int)a0;
- (id)totalBytesSentAsString:(int)a0;

@end
