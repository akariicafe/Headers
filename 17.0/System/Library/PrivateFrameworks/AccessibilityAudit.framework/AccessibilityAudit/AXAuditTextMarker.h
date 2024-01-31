@class NSString;

@interface AXAuditTextMarker : NSObject <AXAuditTransportableObjectProtocol>

@property (retain, nonatomic) id platformMarker;
@property (copy, nonatomic) NSString *markerDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerTransportableObjectWithManager:(id)a0;

@end
