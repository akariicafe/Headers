@class NSString, NSDate;

@interface AMSMetricsIdentifierStoreInfo : NSObject

@property (retain, nonatomic) NSString *account;
@property (nonatomic) BOOL crossDeviceSync;
@property (nonatomic) double resetInterval;
@property (retain, nonatomic) NSDate *started;
@property (retain, nonatomic) NSString *storeKey;
@property (retain, nonatomic) NSString *storeUUID;
@property (nonatomic) BOOL deleted;
@property (retain, nonatomic) NSDate *lastSync;
@property (retain, nonatomic) NSDate *modified;

- (void).cxx_destruct;

@end
