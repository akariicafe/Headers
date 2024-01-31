@class NSString, CKDPProtectionInfo, NSData, CKDPRecordIdentifier;

@interface CKDPAsset : PBCodable <NSCopying> {
    struct { unsigned char constructedAssetDownloadEstimatedSize : 1; unsigned char constructedAssetDownloadURLExpiration : 1; unsigned char downloadTokenExpiration : 1; unsigned char downloadURLExpiration : 1; unsigned char size : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasOwner;
@property (retain, nonatomic) NSString *owner;
@property (readonly, nonatomic) BOOL hasSignature;
@property (retain, nonatomic) NSData *signature;
@property (nonatomic) BOOL hasSize;
@property (nonatomic) long long size;
@property (readonly, nonatomic) BOOL hasDownloadToken;
@property (retain, nonatomic) NSString *downloadToken;
@property (readonly, nonatomic) BOOL hasDownloadRequest;
@property (retain, nonatomic) NSData *downloadRequest;
@property (readonly, nonatomic) BOOL hasContentBaseURL;
@property (retain, nonatomic) NSString *contentBaseURL;
@property (readonly, nonatomic) BOOL hasRequestor;
@property (retain, nonatomic) NSString *requestor;
@property (readonly, nonatomic) BOOL hasRecordId;
@property (retain, nonatomic) CKDPRecordIdentifier *recordId;
@property (readonly, nonatomic) BOOL hasUploadReceipt;
@property (retain, nonatomic) NSString *uploadReceipt;
@property (readonly, nonatomic) BOOL hasDownloadBaseURL;
@property (retain, nonatomic) NSString *downloadBaseURL;
@property (nonatomic) BOOL hasDownloadURLExpiration;
@property (nonatomic) long long downloadURLExpiration;
@property (readonly, nonatomic) BOOL hasProtectionInfo;
@property (retain, nonatomic) CKDPProtectionInfo *protectionInfo;
@property (readonly, nonatomic) BOOL hasReferenceSignature;
@property (retain, nonatomic) NSData *referenceSignature;
@property (nonatomic) BOOL hasDownloadTokenExpiration;
@property (nonatomic) long long downloadTokenExpiration;
@property (readonly, nonatomic) BOOL hasClearAssetKey;
@property (retain, nonatomic) NSData *clearAssetKey;
@property (readonly, nonatomic) BOOL hasAssetAuthorizationResponseUUID;
@property (retain, nonatomic) NSString *assetAuthorizationResponseUUID;
@property (readonly, nonatomic) BOOL hasConstructedAssetDownloadURL;
@property (retain, nonatomic) NSString *constructedAssetDownloadURL;
@property (nonatomic) BOOL hasConstructedAssetDownloadURLExpiration;
@property (nonatomic) long long constructedAssetDownloadURLExpiration;
@property (nonatomic) BOOL hasConstructedAssetDownloadEstimatedSize;
@property (nonatomic) long long constructedAssetDownloadEstimatedSize;
@property (readonly, nonatomic) BOOL hasConstructedAssetDownloadParameters;
@property (retain, nonatomic) NSData *constructedAssetDownloadParameters;

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

@end
