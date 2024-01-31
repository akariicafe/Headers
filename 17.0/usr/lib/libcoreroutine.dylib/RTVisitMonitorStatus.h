@interface RTVisitMonitorStatus : NSObject <NSCopying>

@property (nonatomic) BOOL monitoringVisitIncidents;
@property (nonatomic) BOOL monitoringLeechedVisitIncidents;
@property (nonatomic) BOOL monitoringLowConfidenceVisitIncidents;
@property (nonatomic) unsigned long long feedBufferReferenceCounter;

- (BOOL)invalid;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMonitoringVisitIncidents:(BOOL)a0 monitoringLeechedVisitIncidents:(BOOL)a1 monitoringLowConfidenceVisitIncidents:(BOOL)a2 feedBufferReferenceCounter:(unsigned long long)a3;

@end
