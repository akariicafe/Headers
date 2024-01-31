@class WFClient, NSMutableDictionary;

@interface WFNetworkListRandomMACManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *cache;
@property (retain, nonatomic) WFClient *client;
@property (nonatomic) BOOL shouldResetCache;

- (id)initWithClient:(id)a0;
- (void).cxx_destruct;
- (id)cachedRandomMACForSSID:(id)a0;
- (BOOL)isSSIDinCache:(id)a0;
- (id)newScanRecordWithRandomMACFromScanRecord:(id)a0;
- (void)resetCacheWithCurrentNetworkName:(id)a0;
- (void)setRandomMAC:(id)a0 forNetwork:(id)a1 enabled:(BOOL)a2 shouldAlwaysDisplayRandomAddress:(BOOL)a3;
- (BOOL)shouldAlwaysDisplayRandomAddressForSSID:(id)a0;
- (BOOL)shouldEnableRandomMACForSSID:(id)a0;

@end
