@interface WuluDecoder : NSObject <ATLStatefulDecoder> {
    unsigned long long decoderState;
    BOOL debug;
}

+ (id)getInstance;

- (id)init;
- (void)cleanup;
- (id)parseHCIEvent:(id)a0 withApplet:(id)a1 withPackage:(id)a2 withModule:(id)a3 withTransceiver:(id)a4 withError:(id *)a5;
- (id)GetAppletProperties:(id)a0 withPackage:(id)a1 withModule:(id)a2 withTransceiver:(id)a3 withError:(id *)a4;
- (id)getState:(id)a0;
- (id)DecodeEndE1TLV:(const struct { char *x0; unsigned long long x1; } *)a0 error:(id *)a1;
- (void)addFakeBusTxnGuangdong:(id)a0 history:(id)a1 cityCode:(id)a2;
- (id)adjustHistory:(id)a0;
- (void)adjustState:(id)a0 history:(id)a1 ctx:(id)a2;
- (unsigned int)convertAppletSNtoWalletSN:(unsigned short)a0 txnTypeIdentifier:(unsigned int)a1;
- (unsigned short)convertWalletSNtoAppletSN:(id)a0;
- (id)findNextCappPuchaseEntry:(id)a0 history:(id)a1;
- (id)getAppletStateAndHistory:(id)a0 withApplet:(id)a1 withPackage:(id)a2 withModule:(id)a3 withError:(id *)a4;
- (id)getAppletStateAndHistory:(id)a0 withError:(id *)a1;
- (id)getHistory:(id)a0 state:(id)a1 error:(id *)a2;
- (id)getStationCode:(id)a0 codeSetting:(id)a1 swapByteOrdering:(id)a2 convertFormat:(id)a3 cityCode:(id)a4;
- (BOOL)isMetroEntry:(id)a0 cityCode:(id)a1 setting:(id)a2 error:(id *)a3;
- (id)parseEndEvent:(id)a0 withApplet:(id)a1 withError:(id *)a2;
- (id)parseFile18:(id)a0;
- (id)parseStartEvent:(id)a0 withApplet:(id)a1 withError:(id *)a2;
- (void)parseTransit:(id)a0 file1E:(id)a1 file1A:(id)a2 ctx:(id)a3 state:(id)a4 into:(id)a5;
- (void)parseTransitApollo:(id)a0 file1E:(id)a1 file1A:(id)a2 into:(id)a3;
- (void)parseTransitGalileo:(id)a0 file1E:(id)a1 file1A:(id)a2 ctx:(id)a3 state:(id)a4 into:(id)a5;
- (void)parseTransitKepler:(id)a0 file1E:(id)a1 file1A:(id)a2 into:(id)a3;
- (void)parseTransitNoLocal:(id)a0 file1E:(id)a1 file1A:(id)a2 into:(id)a3;
- (void)parseTransitPioneer:(id)a0 file1E:(id)a1 file1A:(id)a2 into:(id)a3;
- (void)parseTransitSettingBased:(id)a0 file1E:(id)a1 file1A:(id)a2 ctx:(id)a3 into:(id)a4;
- (void)parseUnreliable1ECities:(id)a0 file1E:(id)a1 file1A:(id)a2 ctx:(id)a3 state:(id)a4 into:(id)a5;
- (id)processEndOfTransaction:(id)a0 withApplet:(id)a1 withPackage:(id)a2 withModule:(id)a3 withError:(id *)a4;
- (void)removeDoubleMetroTapGuangdong:(id)a0 history:(id)a1 cityCode:(id)a2;
- (void)removeEnRouteForSingleTapBusGuangdong:(id)a0 transaction:(id)a1 cityCode:(id)a2;
- (void)removeUnreliable1EEntryFlag:(id)a0 ctx:(id)a1;
- (id)resolveTransitModality:(unsigned char)a0;
- (void)setGalileoJinshanMaglevNonlocal:(id)a0 ctx:(id)a1;
- (void)setMetroEntryWithLocalLog:(id)a0 ctx:(id)a1;
- (id)setTimer:(id)a0 history:(id)a1;

@end
