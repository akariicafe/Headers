@class NSString, ATLTimer, NSData, NSNumber, NSMutableArray;

@interface AtlasDecoder : NSObject <ATLStatefulDecoder, ServiceProviderOpaqueData> {
    NSMutableArray *_hciArray;
    NSNumber *_serviceProvider;
    NSString *_appletAID;
    BOOL _errorTransaction;
    NSNumber *_errorCode;
    NSData *_transactionDetailRaw;
    ATLTimer *_timer;
}

+ (id)sharedInstance;
+ (id)DecodeTransactionE1TLV:(const struct { char *x0; unsigned long long x1; } *)a0 error:(id *)a1;
+ (id)amountDictionaryWithAmount:(id)a0 withIdentifier:(id)a1 usingAmountKey:(id)a2 usingCurrencyKey:(id)a3 usingExponentKey:(id)a4 usingIdentifierKey:(id)a5;
+ (id)calculateTransactionSN:(id)a0 withTimeStamp:(id)a1 withEventCode:(id)a2 withSP:(id)a3 withContractPointer:(id)a4 withDifferentiator:(id)a5;
+ (id)commutePlanWithIdAndExpiry:(id)a0 withExpiry:(id)a1;
+ (id)decodeBestContractList:(id)a0;
+ (id)decodeContractFFBitMap:(id)a0;
+ (id)decodeContractJourneyDataBitmap:(id)a0;
+ (id)decodeContractRestrictionBitmap:(id)a0;
+ (id)decodeContractSaleDataBitmap:(id)a0;
+ (id)decodeContractStructureFF:(id)a0;
+ (id)decodeContractValidityBitmap:(id)a0;
+ (id)decodeCounterStructure03:(id)a0;
+ (id)decodeCounterStructure0C:(id)a0;
+ (id)decodeEnvironmentBitMap:(id)a0;
+ (id)decodeEnvironmentData:(id)a0;
+ (id)decodeEnvironmentDataBitMap:(id)a0;
+ (id)decodeEventBitMap:(id)a0;
+ (id)decodeEventEntry:(id)a0;
+ (id)formatCommutePlanIdentifier:(id)a0 withTariffCode:(id)a1 withZoneList:(id)a2;
+ (id)formatTransitDetailRaw:(id)a0;
+ (id)getAbsoluteDateComponents:(id)a0 withTime:(id)a1;
+ (id)getAbsoluteDateComponentsWithDefaultMinutes:(id)a0 withTime:(id)a1 withDefaultMinutes:(id)a2;
+ (id)getInternalEnRouteStatus:(id)a0;
+ (id)getTransitModality:(id)a0;
+ (id)resolveServiceProvider:(unsigned char)a0;

- (id)init;
- (id)getServiceProviderData:(id)a0 withPackage:(id)a1 withModule:(id)a2 withPublicKey:(id)a3 withEncryptionScheme:(id)a4 withTransceiver:(id)a5 withError:(id *)a6;
- (void)cleanup;
- (id)parseHCIEvent:(id)a0 withApplet:(id)a1 withPackage:(id)a2 withModule:(id)a3 withTransceiver:(id)a4 withError:(id *)a5;
- (void).cxx_destruct;
- (id)GetAppletProperties:(id)a0 withPackage:(id)a1 withModule:(id)a2 withTransceiver:(id)a3 withError:(id *)a4;
- (id)getServiceProviderData:(id)a0 withPackage:(id)a1 withModule:(id)a2 withTransceiver:(id)a3 withError:(id *)a4;
- (id)SelectRemoteTicketingCmd;
- (id)parseEndEvent:(id)a0 withApplet:(id)a1 error:(id *)a2;
- (void)dumpAllFiles;
- (id)generateEndEventFromHCI;
- (id)getATLTimer;
- (id)getAppletStateAndHistory:(id)a0 withApplet:(id)a1 withPackage:(id)a2 withModule:(id)a3 withError:(id *)a4;
- (id)getCardIdFromSelectResponse:(id)a0;
- (id)parseCommandEvent:(id)a0 withApplet:(id)a1 error:(id *)a2;
- (id)parseDeselectEvent:(id)a0 withApplet:(id)a1 error:(id *)a2;
- (id)parseHistory:(id)a0 withContractList:(id)a1;
- (id)parseStartEvent:(id)a0 withApplet:(id)a1 error:(id *)a2;
- (id)parseTransactionEvent:(id)a0 withApplet:(id)a1 error:(id *)a2;
- (id)processEndOfTransaction:(id)a0 withApplet:(id)a1 withPackage:(id)a2 withModule:(id)a3 withError:(id *)a4;
- (id)readAndDecodeBestContractList:(id)a0 sfi:(unsigned char)a1 error:(id *)a2;
- (id)readAndDecodeContracts:(id)a0 sfi:(unsigned char)a1 count:(unsigned char)a2 error:(id *)a3;
- (id)readAndDecodeCounter:(id)a0 sfi:(unsigned char)a1 recNum:(unsigned char)a2 counterStructure:(unsigned char)a3 error:(id *)a4;
- (id)readAndDecodeEnvironment:(id)a0 sfi:(unsigned char)a1 error:(id *)a2;
- (id)readAndDecodeHistory:(id)a0 sfi:(unsigned char)a1 count:(unsigned char)a2 error:(id *)a3;
- (id)readPartnerRecords:(id)a0 sfi:(unsigned char)a1 count:(unsigned char)a2 error:(id *)a3;
- (id)readRecord:(id)a0 sfi:(unsigned char)a1 index:(unsigned char)a2 recLength:(unsigned char)a3 error:(id *)a4;
- (void)stripContract:(id)a0;

@end
