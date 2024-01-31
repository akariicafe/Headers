@class NSArray, NSString, UARPAssetTag, UARPAssetVersion, NSMutableArray, NSData;

@interface UARPSuperBinaryPayload : NSObject {
    BOOL _hostPersonalization;
    NSString *_ticketPrefix;
    BOOL _ticketNeedsUnitNumber;
    BOOL _suffixNeedsUnitNumber;
    BOOL _prefixNeedsUnitNumber;
    NSMutableArray *_measurements;
    NSMutableArray *_personalizationList;
}

@property (readonly) UARPAssetTag *tag;
@property (readonly) UARPAssetVersion *version;
@property (readonly) NSMutableArray *tlvs;
@property (readonly) NSArray *tssRequests;
@property (readonly) NSData *payloadData;
@property (readonly) NSData *metaData;

- (id)getVersion;
- (id)description;
- (void).cxx_destruct;
- (id)getTlvs;
- (id)composeTSSRequest:(unsigned long long)a0;
- (BOOL)expandTLVs;
- (id)getMetaData;
- (id)getPayloadData;
- (id)getTag;
- (id)getTssRequests;
- (id)initWithData:(id)a0 metaData:(id)a1 tag:(id)a2 version:(id)a3;
- (id)manifest:(unsigned long long)a0;
- (BOOL)needsHostPersonalization;
- (id)personalizationObject:(unsigned long long)a0;
- (id)personalizedData:(unsigned long long)a0;
- (id)personalizedMetaData:(unsigned long long)a0;
- (void)processMeasurementsForTSSOptions:(id)a0 info:(id)a1;
- (void)processTLVsForPersonalization;
- (BOOL)queryTatsuSigningServer:(id)a0 unitNumber:(unsigned long long)a1 ssoOnly:(BOOL)a2 error:(id *)a3;
- (id)requiredTSSOptions;
- (id)tssKeyName:(id)a0 unitNumber:(unsigned long long)a1;
- (id)tssRequest:(unsigned long long)a0;
- (void)updateBoardID:(id)a0 unitNumber:(unsigned long long)a1;
- (void)updateChipID:(id)a0 unitNumber:(unsigned long long)a1;
- (void)updateECID:(id)a0 unitNumber:(unsigned long long)a1;
- (void)updateNonce:(id)a0 unitNumber:(unsigned long long)a1;
- (void)updateProductionMode:(id)a0 unitNumber:(unsigned long long)a1;
- (void)updateSecurityDomain:(id)a0 unitNumber:(unsigned long long)a1;
- (void)updateSecurityMode:(id)a0 unitNumber:(unsigned long long)a1;

@end
