@class NSString, AXAuditTextMarker;

@interface AXAuditTextMarkerRange : NSObject <AXAuditTransportableObjectProtocol>

@property (copy, nonatomic) NSString *markerRangeDescription;
@property (retain, nonatomic) AXAuditTextMarker *startMarker;
@property (retain, nonatomic) AXAuditTextMarker *endMarker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerTransportableObjectWithManager:(id)a0;

@end
