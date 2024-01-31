@class OTApplicantToSponsorRound2M1, OTSupportOctagonMessage, OTSponsorToApplicantRound2M2, OTSponsorToApplicantRound1M2, OTSupportSOSMessage;

@interface OTPairingMessage : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasEpoch;
@property (retain, nonatomic) OTSponsorToApplicantRound1M2 *epoch;
@property (readonly, nonatomic) BOOL hasPrepare;
@property (retain, nonatomic) OTApplicantToSponsorRound2M1 *prepare;
@property (readonly, nonatomic) BOOL hasVoucher;
@property (retain, nonatomic) OTSponsorToApplicantRound2M2 *voucher;
@property (readonly, nonatomic) BOOL hasSupportsOctagon;
@property (retain, nonatomic) OTSupportOctagonMessage *supportsOctagon;
@property (readonly, nonatomic) BOOL hasSupportsSOS;
@property (retain, nonatomic) OTSupportSOSMessage *supportsSOS;

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
