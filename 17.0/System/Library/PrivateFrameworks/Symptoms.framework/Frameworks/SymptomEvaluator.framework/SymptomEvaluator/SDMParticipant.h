@class NSString;

@interface SDMParticipant : NSObject

@property (retain, nonatomic) NSString *name;
@property (nonatomic) unsigned long long participationDelta;
@property (nonatomic) unsigned long long periodDuration;
@property (nonatomic) unsigned long long dlThroughputBps;
@property (nonatomic) unsigned long long ulThroughputBps;
@property (nonatomic) unsigned long long additionalFlags;

- (void).cxx_destruct;

@end
