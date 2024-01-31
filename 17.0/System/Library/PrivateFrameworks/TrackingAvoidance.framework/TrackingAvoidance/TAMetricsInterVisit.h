@class NSString, TAInterVisitMetricPerDevice, TASPAdvertisement;

@interface TAMetricsInterVisit : NSObject <TAMetricsProtocol>

@property (readonly, nonatomic) TAInterVisitMetricPerDevice *currentInterVisitMetric;
@property (readonly, nonatomic) TAInterVisitMetricPerDevice *totalInterVisitMetric;
@property (readonly, nonatomic) TASPAdvertisement *latestAdvertisement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)descriptionDictionary;
- (void).cxx_destruct;
- (unsigned long long)getMetricsCollectionType;

@end
