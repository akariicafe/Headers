@class NSArray, NSDictionary;

@interface DSGeneralLogCollector : NSObject

@property (retain, nonatomic) NSArray *logFiles;
@property (retain, nonatomic) NSDictionary *friendlyAppNamesDictionary;
@property (retain, nonatomic) NSArray *logIDs;

+ (id)latestRootLog;
+ (id)latestUserLog;

- (void).cxx_destruct;
- (id)initWithLogIDs:(id)a0;
- (void)enumerateLogLinesWithBlock:(id /* block */)a0;
- (void)getLogFiles;
- (id)logFilesFromEnumerator:(id)a0;

@end
