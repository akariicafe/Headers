@class NSString, NSDate;

@interface BLSHCriticalAssertDidFailDetails : NSObject

@property (retain, nonatomic) NSDate *date;
@property (copy, nonatomic) NSString *buildVersion;
@property (copy, nonatomic) NSString *device;
@property (copy, nonatomic) NSString *explanation;
@property (copy, nonatomic) NSString *processName;
@property (nonatomic) BOOL debugLogsEnabled;

- (void).cxx_destruct;
- (id)initWithCriticalAssertDidFailDictionary:(id)a0;

@end
