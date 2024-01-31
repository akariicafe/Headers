@class NSString;

@interface _MPCProtoItemIdentifierSet : PBCodable <NSCopying> {
    long long _cloudID;
    long long _delegateInfoID;
    long long _purchaseHistoryID;
    long long _storeAdamID;
    long long _storeSubscriptionAdamID;
    NSString *_cloudUniversalLibraryID;
    NSString *_contentItemID;
    NSString *_playbackAuthorizationToken;
    struct { unsigned char cloudID : 1; unsigned char delegateInfoID : 1; unsigned char purchaseHistoryID : 1; unsigned char storeAdamID : 1; unsigned char storeSubscriptionAdamID : 1; } _has;
}

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
