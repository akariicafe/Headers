@class CWFInterface, NSMutableDictionary, NSString;

@interface NPTWiFiCollector : NSObject <NPTMetadataCollection>

@property (retain, nonatomic) CWFInterface *interface;
@property (copy) id /* block */ metadataDidChangeHandler;
@property (retain) NSMutableDictionary *cachedMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)collectorName;
+ (id)OpModeToString:(int)a0;
+ (id)ControlModeToString:(unsigned int)a0;
+ (id)SecurityTypeToString:(unsigned long long)a0;
+ (id)BTCModeToString:(int)a0;
+ (id)PhyModeToString:(int)a0;
+ (long long)channelBandToInt:(unsigned int)a0;
+ (id)convertBSSIDToOUI:(id)a0;
+ (id)convertPowerStateToString:(id)a0;
+ (id)fetchWiFiData:(id)a0;

- (void).cxx_destruct;
- (void)startCollectingWithCompletion:(id /* block */)a0;
- (void)stopCollecting;

@end
