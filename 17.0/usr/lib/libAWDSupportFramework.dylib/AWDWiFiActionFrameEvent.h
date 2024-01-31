@class NSData;

@interface AWDWiFiActionFrameEvent : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char actionCode : 1; unsigned char btmAbridged : 1; unsigned char btmBssTerminationIncluded : 1; unsigned char btmDisassociationImminent : 1; unsigned char btmDisassociationTimeout : 1; unsigned char btmEssTerminationIncluded : 1; unsigned char btmHasPreferredCandidateList : 1; unsigned char btmTerminationDuration : 1; unsigned char btmValidityInterval : 1; unsigned char categoryCode : 1; unsigned char dialogToken : 1; unsigned char environmentType : 1; unsigned char frameType : 1; unsigned char status : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasOui;
@property (retain, nonatomic) NSData *oui;
@property (nonatomic) BOOL hasEnvironmentType;
@property (nonatomic) unsigned int environmentType;
@property (nonatomic) BOOL hasCategoryCode;
@property (nonatomic) unsigned int categoryCode;
@property (nonatomic) BOOL hasActionCode;
@property (nonatomic) unsigned int actionCode;
@property (nonatomic) BOOL hasDialogToken;
@property (nonatomic) unsigned int dialogToken;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) unsigned int status;
@property (nonatomic) BOOL hasFrameType;
@property (nonatomic) unsigned int frameType;
@property (nonatomic) BOOL hasBtmDisassociationTimeout;
@property (nonatomic) unsigned int btmDisassociationTimeout;
@property (nonatomic) BOOL hasBtmValidityInterval;
@property (nonatomic) unsigned int btmValidityInterval;
@property (nonatomic) BOOL hasBtmTerminationDuration;
@property (nonatomic) unsigned int btmTerminationDuration;
@property (nonatomic) BOOL hasBtmHasPreferredCandidateList;
@property (nonatomic) unsigned int btmHasPreferredCandidateList;
@property (nonatomic) BOOL hasBtmAbridged;
@property (nonatomic) unsigned int btmAbridged;
@property (nonatomic) BOOL hasBtmDisassociationImminent;
@property (nonatomic) unsigned int btmDisassociationImminent;
@property (nonatomic) BOOL hasBtmBssTerminationIncluded;
@property (nonatomic) unsigned int btmBssTerminationIncluded;
@property (nonatomic) BOOL hasBtmEssTerminationIncluded;
@property (nonatomic) unsigned int btmEssTerminationIncluded;

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
