@class MAAutoAssetSelector, MADAutoSetPolicy;

@interface MADAutoAssetScheduledJob : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) MAAutoAssetSelector *assetSelector;
@property (nonatomic) long long intervalSecs;
@property (nonatomic) long long remainingSecs;
@property (nonatomic) BOOL pushedJob;
@property (nonatomic) BOOL requiringRetry;
@property (nonatomic) BOOL setJob;
@property (retain, nonatomic) MADAutoSetPolicy *setPolicy;

- (id)summary;
- (void)encodeWithCoder:(id)a0;
- (id)copy;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initForAssetSelector:(id)a0 withActivityInterval:(long long)a1 forPushedJob:(BOOL)a2;
- (id)initForAssetSelector:(id)a0 withActivityInterval:(long long)a1 forPushedJob:(BOOL)a2 forSetJob:(BOOL)a3 requiringRetry:(BOOL)a4;
- (id)initForAssetSelector:(id)a0 withActivityInterval:(long long)a1 forPushedJob:(BOOL)a2 forSetJob:(BOOL)a3 withSetPolicy:(id)a4 requiringRetry:(BOOL)a5;
- (id)initForAssetSelector:(id)a0 withActivityInterval:(long long)a1 forPushedJob:(BOOL)a2 requiringRetry:(BOOL)a3;

@end
