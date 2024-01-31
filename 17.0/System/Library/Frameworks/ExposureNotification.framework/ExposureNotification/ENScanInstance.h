@interface ENScanInstance : NSObject <CUXPCCodable>

@property (nonatomic) unsigned char minimumAttenuation;
@property (nonatomic) unsigned char typicalAttenuation;
@property (nonatomic) long long secondsSinceLastScan;

- (void)encodeWithXPCObject:(id)a0;
- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (id)description;

@end
