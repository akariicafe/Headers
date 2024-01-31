@class NSString, NSDate;

@interface WLStatistics : NSObject

@property (readonly, nonatomic) NSString *contentType;
@property (nonatomic) BOOL selectedForMigration;
@property (nonatomic) unsigned long long downloadDuration;
@property (nonatomic) unsigned long long downloadByteCount;
@property (retain, nonatomic) NSDate *importStartDate;
@property (retain, nonatomic) NSDate *importEndDate;
@property (nonatomic) unsigned long long importStartBytesFree;
@property (nonatomic) unsigned long long importEndBytesFree;
@property (nonatomic) unsigned long long importRecordCount;
@property (nonatomic) unsigned long long importFailedRecordCount;

+ (id)_statisticsWithContentType:(id)a0;
+ (id)aggregateContentType;
+ (id)fetchContentType;

- (id)description;
- (void).cxx_destruct;
- (void)setFetchDuration:(unsigned long long)a0;
- (unsigned long long)importDuration;
- (long long)importBytesUsed;
- (void)addToFetchByteCount:(unsigned long long)a0;
- (unsigned long long)downloadBytesPerSecond;
- (id)fetchLogString;
- (void)incrementFetchFailedRequestCount;
- (void)incrementFetchRequestCount;
- (void)setFetchEndBytesFree:(unsigned long long)a0;
- (void)setFetchStartBytesFree:(unsigned long long)a0;

@end
