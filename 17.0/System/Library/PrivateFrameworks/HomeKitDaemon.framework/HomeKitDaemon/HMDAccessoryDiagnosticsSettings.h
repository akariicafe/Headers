@class HMDService, HAPSupportedDiagnosticsSnapshot, NSString;

@interface HMDAccessoryDiagnosticsSettings : NSObject

@property (readonly) HMDService *diagnosticsService;
@property (retain) HAPSupportedDiagnosticsSnapshot *currentSnapshot;
@property (readonly) NSString *transport;

- (id)initWithService:(id)a0;
- (void).cxx_destruct;
- (id)attributeDescriptions;

@end
