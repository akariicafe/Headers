@class NSString, NSData;

@interface BRFieldContentSignature : PBCodable <BRFieldVersionSignature, NSCopying> {
    struct { unsigned char size : 1; } _has;
}

@property (readonly, nonatomic) NSString *versionIdentifier;
@property (readonly, nonatomic) BOOL hasOldVersionIdentifier;
@property (readonly, nonatomic) NSString *oldVersionIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *versionIdentifier;
@property (readonly, nonatomic) BOOL hasContentSignature;
@property (retain, nonatomic) NSData *contentSignature;
@property (readonly, nonatomic) BOOL hasOldVersionIdentifier;
@property (retain, nonatomic) NSString *oldVersionIdentifier;
@property (nonatomic) BOOL hasSize;
@property (nonatomic) long long size;

- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)etag;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isPackage;
- (id)initWithLocalVersion:(id)a0;
- (BOOL)hasPopulatedVersionAndSignature;
- (id)_oldVersionEtag;
- (unsigned long long)_localEditCounter;
- (unsigned long long)_oldVersionLocalEditCounter;
- (BOOL)containsLocalEdits;
- (BOOL)contentDiffersWithSignature:(id)a0;
- (BOOL)hasOnlyLocalEditsOnTopOfSignature:(id)a0;
- (id)initWithLoserEtag:(id)a0;
- (BOOL)isEquivalentToSignature:(id)a0;
- (BOOL)isPendingSignature;

@end
