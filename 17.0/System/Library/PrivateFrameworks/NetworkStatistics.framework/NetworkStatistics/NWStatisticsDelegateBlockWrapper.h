@class NSString;

@interface NWStatisticsDelegateBlockWrapper : NSObject <NWStatisticsSourceDelegate, NWStatisticsManagerDelegate>

@property (copy) id /* block */ addedBlock;
@property (copy) id /* block */ countsBlock;
@property (copy) id /* block */ descriptionBlock;
@property (copy) id /* block */ removedBlock;
@property (copy) id /* block */ eventsBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sourceDidReceiveDescription:(id)a0;
- (void)statisticsManager:(id)a0 didAddSource:(id)a1;
- (void).cxx_destruct;
- (void)statisticsManager:(id)a0 didRemoveSource:(id)a1;
- (void)sourceDidReceiveCounts:(id)a0;

@end
