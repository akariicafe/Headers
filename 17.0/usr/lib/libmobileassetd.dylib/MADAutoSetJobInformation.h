@class MANAutoAssetSetInfoFound, MANAutoAssetSetInfoDesire, MANAutoAssetSetStatus, MANAutoAssetSetInfoInstance, MADAutoSetDescriptor;

@interface MADAutoSetJobInformation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) MANAutoAssetSetInfoInstance *clientInstance;
@property (retain, nonatomic) MANAutoAssetSetInfoDesire *clientDesire;
@property (retain, nonatomic) MANAutoAssetSetInfoFound *foundContent;
@property (retain, nonatomic) MADAutoSetDescriptor *setDescriptor;
@property (retain, nonatomic) MANAutoAssetSetStatus *currentSetStatus;

- (id)init;
- (id)summary;
- (void)encodeWithCoder:(id)a0;
- (id)copy;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
