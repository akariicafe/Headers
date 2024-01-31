@class SFNetworkAttachment, NSDate;

@interface SFLiveRoutePerf : NSManagedObject

@property (nonatomic) double adminDisables;
@property (nonatomic) double bytesIn;
@property (nonatomic) double bytesOut;
@property (nonatomic) double captivityRedirects;
@property (nonatomic) double certErrors;
@property (nonatomic) double connAttempts;
@property (nonatomic) double connSuccesses;
@property (nonatomic) double dataStalls;
@property (nonatomic) double epochs;
@property (nonatomic) double faultyStay;
@property (nonatomic) short kind;
@property (nonatomic) double lowLqmStay;
@property (nonatomic) double lowqStay;
@property (nonatomic) double lqmTransitionCount;
@property (nonatomic) double overallStay;
@property (nonatomic) double overallStayM2;
@property (nonatomic) double packetsIn;
@property (nonatomic) double packetsOut;
@property (nonatomic) double reTxBytes;
@property (nonatomic) double rttAvg;
@property (nonatomic) double rttMin;
@property (nonatomic) double rttVar;
@property (nonatomic) double rxDupeBytes;
@property (nonatomic) double rxOOOBytes;
@property (copy, nonatomic) NSDate *timeStamp;
@property (nonatomic) double topDownloadRate;
@property (retain, nonatomic) SFNetworkAttachment *hasNetworkAttachment;

+ (id)entityName;
+ (id)fetchRequest;

@end
