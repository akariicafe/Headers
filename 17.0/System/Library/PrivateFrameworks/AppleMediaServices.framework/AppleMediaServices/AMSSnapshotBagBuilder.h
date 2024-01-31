@class NSString, NSDictionary, NSDate, AMSProcessInfo;

@interface AMSSnapshotBagBuilder : NSObject

@property (retain, nonatomic) NSDictionary *data;
@property (retain, nonatomic) NSDictionary *defaultValues;
@property (retain, nonatomic) NSDate *expirationDate;
@property (retain, nonatomic) AMSProcessInfo *processInfo;
@property (retain, nonatomic) NSString *profile;
@property (retain, nonatomic) NSString *profileVersion;

- (id)buildWithError:(id *)a0;
- (void).cxx_destruct;

@end
