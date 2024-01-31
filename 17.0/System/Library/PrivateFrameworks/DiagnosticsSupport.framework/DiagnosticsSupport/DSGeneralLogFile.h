@class NSURL, NSString, NSDate;

@interface DSGeneralLogFile : NSObject

@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSDate *restoreDate;
@property (readonly, nonatomic) NSDate *updateDate;
@property (readonly, nonatomic) NSDate *logStartDate;
@property (readonly, nonatomic) NSString *hardwareModel;
@property (readonly, nonatomic) NSString *currentOSVersion;
@property (readonly, nonatomic) NSString *serialNumber;
@property (readonly, nonatomic) int logVersion;

- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (BOOL)enumerateLogLinesWithIDs:(id)a0 usingBlock:(id /* block */)a1;
- (BOOL)parseDetailsWithURL:(id)a0;
- (BOOL)parseHeadersWithLine:(id)a0;

@end
