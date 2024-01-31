@class NSString;

@interface BLTPBContact : PBCodable <NSCopying> {
    struct { unsigned char displayNameSuggested : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasHandle;
@property (retain, nonatomic) NSString *handle;
@property (nonatomic) unsigned int handleType;
@property (readonly, nonatomic) BOOL hasServiceName;
@property (retain, nonatomic) NSString *serviceName;
@property (readonly, nonatomic) BOOL hasDisplayName;
@property (retain, nonatomic) NSString *displayName;
@property (readonly, nonatomic) BOOL hasCnContactIdentifier;
@property (retain, nonatomic) NSString *cnContactIdentifier;
@property (readonly, nonatomic) BOOL hasCnContactFullname;
@property (retain, nonatomic) NSString *cnContactFullname;
@property (nonatomic) BOOL cnContactIdentifierSuggested;
@property (nonatomic) BOOL hasDisplayNameSuggested;
@property (nonatomic) BOOL displayNameSuggested;
@property (readonly, nonatomic) BOOL hasCustomIdentifier;
@property (retain, nonatomic) NSString *customIdentifier;

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
