@class NSDictionary, NSString;

@interface DMPluginParameters : NSObject

@property (retain, nonatomic) NSDictionary *dispositionSupersetOfContext;
@property (copy, nonatomic) NSString *backupDeviceUUID;

+ (id)backupDeviceUUIDFromDispositionSupersetOfContext:(id)a0;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithDispositionSupersetOfContext:(id)a0 backupDeviceUUID:(id)a1;

@end
