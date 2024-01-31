@class NSString, NSUUID, NSDate, ENRegion;

@interface ENExposureDetectionHistorySession : NSObject <CUXPCCodable>

@property (copy, nonatomic) NSString *appBundleIdentifier;
@property (copy, nonatomic) NSString *systemBuildVersion;
@property (copy, nonatomic) ENRegion *region;
@property (copy, nonatomic) NSDate *date;
@property (copy, nonatomic) NSString *exposureClassificationIdentifier;
@property (nonatomic) unsigned long long fileCount;
@property (nonatomic) unsigned long long matchCount;
@property (copy, nonatomic) NSUUID *UUID;

- (id)initWithUUID:(id)a0;
- (void)encodeWithXPCObject:(id)a0;
- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
