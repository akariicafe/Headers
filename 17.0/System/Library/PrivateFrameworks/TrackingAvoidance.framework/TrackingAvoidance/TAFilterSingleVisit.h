@interface TAFilterSingleVisit : NSObject

+ (id)filterSuspiciousDeviceWithStore:(id)a0 singleVisitSettings:(id)a1 andAppendOutgoingRequestsTo:(id)a2;
+ (unsigned long long)getSingleVisitDetectionTypeForLOIType:(unsigned long long)a0;
+ (unsigned long long)getSingleVisitNotificationImmediacyTypeForLOIType:(unsigned long long)a0 singleVisitSettings:(id)a1;
+ (BOOL)shouldDetectWithStore:(id)a0 filterSingleVisitSettings:(id)a1;

@end
