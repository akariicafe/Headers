@class NSString, NSDictionary, NSDate;

@interface PLIOReportStats : NSObject

@property (retain) NSString *driverName;
@property (retain) NSDictionary *previousIOReportSample;
@property (retain) NSDictionary *ioReportSample;
@property (retain) NSDate *sampleTime;
@property (retain) NSDate *sampleTimePrevious;
@property struct __IOReportSubscriptionCF { } *subscription;
@property (retain) NSDictionary *subscribedChannels;

- (BOOL)updateStats;
- (id)initWithGroup:(id)a0 andSubGroup:(id)a1 withChannelIDs:(id)a2 manualChannelOnly:(BOOL)a3;
- (id)init;
- (void)dealloc;
- (id)initWithGroup:(id)a0 andSubGroup:(id)a1 withChannelIDs:(id)a2;
- (id)_init;
- (id)calculateDeltaFromPreviousSamplesConvertingUnitToUnityScale:(BOOL)a0;
- (id)getCurrentStats;
- (id)parseIOReportSample;
- (id)deltaValueForSimpleChannel:(id)a0;
- (id)initWithDriverName:(id)a0 withGroup:(id)a1;
- (id)_calculateDeltaFromPreviousStats:(id)a0 toCurrentStats:(id)a1;
- (id)currentValueForStateChannel:(id)a0 atIndex:(int)a1;
- (BOOL)subscribeToGroup:(id)a0 andSubGroup:(id)a1 withChannelIDs:(id)a2;
- (id)_parseIOReportSampleFromStats:(id)a0 convertingUnitToUnityScale:(BOOL)a1;
- (id)initWithGroup:(id)a0 andSubGroup:(id)a1;
- (void)clearSubscription;
- (BOOL)subscribeToGroup:(id)a0 andSubGroup:(id)a1 withChannelIDs:(id)a2 manualChannelOnly:(BOOL)a3;
- (double)getSampleDuration;
- (id)calculateDeltaFromPreviousSamples;
- (void).cxx_destruct;
- (id)currentValueForSimpleChannel:(id)a0;
- (id)getDeltaStats;
- (id)deltaValueForStateChannel:(id)a0 atIndex:(int)a1;
- (double)_convertValue:(long long)a0 toUnityScaleFromUnit:(unsigned long long)a1;
- (BOOL)updateStatsWithBlock:(id /* block */)a0;
- (id)parseSimpleDeltaSample;
- (BOOL)subscribeToGroup:(id)a0 andSubGroup:(id)a1;

@end
