@class NSString, NSDate;

@interface AMSMetricsIdentifierInfo : NSObject

@property (nonatomic) BOOL crossDeviceSync;
@property (retain, nonatomic) NSString *idKey;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *storeUUID;
@property (retain, nonatomic) NSString *value;
@property (retain, nonatomic) NSDate *expires;
@property (nonatomic) BOOL deleted;
@property (retain, nonatomic) NSDate *lastSync;
@property (retain, nonatomic) NSDate *modified;

- (id)syncStateFieldName;
- (void).cxx_destruct;
- (void)populateDictionary:(id)a0;

@end
