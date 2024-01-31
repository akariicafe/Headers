@class NSMutableDictionary;

@interface HFCharacteristicReadLogger : NSObject

@property (retain, nonatomic) NSMutableDictionary *accessoriesToReadByTransport;

+ (id)nameForTransportType:(unsigned long long)a0;
+ (id)transportKeyForCharacteristic:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)addCharacteristic:(id)a0 withUpdateLogger:(id)a1;
- (void)markCharacteristicAsRead:(id)a0 withLogger:(id)a1;
- (unsigned long long)numberOfAccessoriesForTransportType:(unsigned long long)a0;

@end
