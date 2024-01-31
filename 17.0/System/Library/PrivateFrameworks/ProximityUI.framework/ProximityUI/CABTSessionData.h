@class NSDictionary, NSNumber, NSUUID;

@interface CABTSessionData : NSObject

@property (retain, nonatomic) NSDictionary *configureEvent;
@property (retain, nonatomic) NSDictionary *configureCompleteEvent;
@property (retain, nonatomic) NSDictionary *deinitEvent;
@property (retain, nonatomic) NSNumber *numberOfErrorEvents;
@property (nonatomic) BOOL isOwner;
@property (nonatomic) int txPower;
@property (retain, nonatomic) NSUUID *productUUID;

- (id)init;
- (void)error:(id)a0;
- (void).cxx_destruct;
- (void)logData;
- (void)deinit:(id)a0;
- (void)configure:(id)a0 withOwner:(BOOL)a1;
- (void)configureComplete:(id)a0 withTxPower:(int)a1;

@end
