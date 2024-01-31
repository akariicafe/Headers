@class NSString, GEOPDPlug;

@interface GEOEVChargerPlug : NSObject {
    GEOPDPlug *_pdPlug;
}

@property (readonly, nonatomic) int connectorType;
@property (readonly, nonatomic) NSString *connectorTypeDisplayText;
@property (readonly, nonatomic) NSString *currentTypeDisplayText;
@property (readonly, nonatomic) unsigned long long powerWatts;
@property (readonly, nonatomic) unsigned long long totalNumberOfChargers;
@property (readonly, nonatomic) unsigned long long availableNumberOfChargers;
@property (readonly, nonatomic) int realtimeStatus;

+ (id)plugsFromPDPlugs:(id)a0;

- (void).cxx_destruct;
- (id)initWithPDPlug:(id)a0;

@end
