@class NSArray, DTSysmonCPUUsageRecord, DTSysmonSystemRecord;

@interface DTSysmonRecord : NSObject

@property (nonatomic) unsigned int recordType;
@property (nonatomic) unsigned long long startTimestamp;
@property (nonatomic) unsigned long long endTimestamp;
@property (retain, nonatomic) NSArray *changedProcesses;
@property (retain, nonatomic) NSArray *deadProcesses;
@property (retain, nonatomic) DTSysmonSystemRecord *system;
@property (retain, nonatomic) NSArray *coalitions;
@property (retain, nonatomic) NSArray *deadCoalitions;
@property (retain, nonatomic) DTSysmonCPUUsageRecord *cpuUsage;
@property (retain, nonatomic) NSArray *processAttributes;
@property (retain, nonatomic) NSArray *systemAttributes;
@property (retain, nonatomic) NSArray *coalitionAttributes;

- (void).cxx_destruct;

@end
