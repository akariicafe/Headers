@class NSMutableDictionary, MADAutoAssetClientRequest, MAAutoAssetSelector;

@interface MADAutoSetEliminate : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain, nonatomic) MADAutoAssetClientRequest *clientRequest;
@property (readonly, retain, nonatomic) MAAutoAssetSelector *assetSelector;
@property (nonatomic) BOOL awaitingSchedulerAck;
@property (nonatomic) BOOL awaitingStagerAck;
@property (retain, nonatomic) NSMutableDictionary *activeJobsByUUID;

- (id)summary;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithAssetSelector:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithClientRequest:(id)a0;
- (id)initWithClientRequest:(id)a0 withAssetSelector:(id)a1;

@end
