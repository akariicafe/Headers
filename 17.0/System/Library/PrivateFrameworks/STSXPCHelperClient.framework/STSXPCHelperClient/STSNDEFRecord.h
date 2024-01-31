@class NSData;

@interface STSNDEFRecord : NSObject <NSSecureCoding> {
    unsigned char _firstOctet;
    NSData *_identifier;
    NSData *_type;
    NSData *_payload;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned char typeNameFormat;
@property (copy, nonatomic) NSData *type;
@property (copy, nonatomic) NSData *identifier;
@property (copy, nonatomic) NSData *payload;

+ (id)recordsWithTNF:(unsigned char)a0 type:(id)a1 identifier:(id)a2 payload:(id)a3 chunkSize:(unsigned long long)a4 outError:(unsigned long long *)a5;
+ (BOOL)_parseNDEFData:(id)a0 outRecords:(id)a1;
+ (id)ndefRecordsWithData:(id)a0;

- (unsigned char)header;
- (void)setHeader:(unsigned char)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)chunked;
- (void)setShortRecord:(BOOL)a0;
- (BOOL)_idLengthPresent;
- (void)_setIdLengthPresent:(BOOL)a0;
- (BOOL)messageBegin;
- (BOOL)messageEnd;
- (void)setChunked:(BOOL)a0;
- (void)setMessageBegin:(BOOL)a0;
- (void)setMessageEnd:(BOOL)a0;
- (BOOL)shortRecord;
- (id)getAuxiliaryDataReferencesFromAlternativeCarrierRecord;
- (id)getCarrierDataReferenceFromAlternativeCarrierRecord;
- (unsigned long long)getCarrierPowerStateFromAlternativeCarrierRecord;
- (id)initWithFormat:(unsigned char)a0 type:(id)a1 identifier:(id)a2 payload:(id)a3;
- (BOOL)isAlternativeCarrierRecord;
- (BOOL)isBluetoothLEConfigurationRecord;
- (BOOL)isCollisionResolutionRecord;
- (BOOL)isHandoverRequestRecord;
- (BOOL)isHandoverSelectErrorRecord;
- (BOOL)isHandoverSelectRecord;
- (BOOL)isISO18013DeviceEngagementRecord;
- (BOOL)isISO18013ReaderEngagementRecord;
- (BOOL)isNfcConfigurationRecord;
- (BOOL)isWiFiAwareConfigurationRecord;

@end
