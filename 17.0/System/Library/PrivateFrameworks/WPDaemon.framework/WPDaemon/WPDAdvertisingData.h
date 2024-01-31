@class NSMutableData, NSMutableSet, NSData;

@interface WPDAdvertisingData : NSObject

@property (retain) NSMutableData *internalData;
@property (retain) NSMutableSet *types;
@property long long advertRate;
@property (readonly, getter=getData) NSData *data;
@property BOOL enableEPAForAdvertisement;
@property BOOL isRanging;
@property BOOL assertPower;

- (id)init;
- (BOOL)isEnableEPAForAdvertisement;
- (id)description;
- (BOOL)isValidWithAdditionalRequest:(id)a0;
- (BOOL)isEqualToData:(id)a0;
- (void).cxx_destruct;
- (void)addAdvertisingRequest:(id)a0;

@end
