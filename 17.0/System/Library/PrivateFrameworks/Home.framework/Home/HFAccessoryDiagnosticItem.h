@class NSString, NSURL, HMAccessoryDiagnosticsMetadata;

@interface HFAccessoryDiagnosticItem : HFItem

@property (readonly, nonatomic) HMAccessoryDiagnosticsMetadata *metadata;
@property (readonly, nonatomic) NSString *filename;
@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) NSURL *fileURL;
@property (readonly, nonatomic) NSURL *privacyPolicyURL;
@property (readonly, nonatomic) long long consentVersion;
@property (readonly, nonatomic) NSString *manufacturer;

- (void).cxx_destruct;
- (long long)uploadType;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)initWithLogMetadata:(id)a0 accessory:(id)a1;
- (BOOL)isEligibleForUpload;

@end
