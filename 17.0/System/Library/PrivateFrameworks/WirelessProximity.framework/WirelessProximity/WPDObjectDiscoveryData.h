@class NSMutableData;

@interface WPDObjectDiscoveryData : NSObject

@property (retain, nonatomic) NSMutableData *address;
@property (retain, nonatomic) NSMutableData *payload;
@property (nonatomic) long long length;

+ (id)addressFromNearbyToken:(id)a0;
+ (id)addressesFromNearbyTokens:(id)a0;
+ (unsigned char)applyMaskToAddress:(id)a0;
+ (id)objectDiscoveryReportFromAdvReport:(id)a0;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)wipeout;
- (id)updateWithKey:(id)a0 Status:(unsigned char)a1 Reserved:(id)a2;

@end
