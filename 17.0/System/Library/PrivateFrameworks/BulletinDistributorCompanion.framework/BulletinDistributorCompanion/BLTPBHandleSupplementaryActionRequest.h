@class NSString, BLTPBActionInformation;

@interface BLTPBHandleSupplementaryActionRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL hasPublisherBulletinID;
@property (retain, nonatomic) NSString *publisherBulletinID;
@property (readonly, nonatomic) BOOL hasRecordID;
@property (retain, nonatomic) NSString *recordID;
@property (readonly, nonatomic) BOOL hasSectionID;
@property (retain, nonatomic) NSString *sectionID;
@property (readonly, nonatomic) BOOL hasActionInfo;
@property (retain, nonatomic) BLTPBActionInformation *actionInfo;

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
