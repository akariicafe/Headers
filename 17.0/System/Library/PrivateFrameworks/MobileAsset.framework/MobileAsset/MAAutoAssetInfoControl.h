@class NSArray, NSString;

@interface MAAutoAssetInfoControl : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL clearingAfter;
@property (readonly, nonatomic) BOOL forceUnlock;
@property (readonly, retain, nonatomic) NSArray *limitedToAssetTypes;
@property (readonly, retain, nonatomic) NSString *volumeToReclaim;
@property (readonly, nonatomic) int cacheDeleteUrgency;
@property (readonly, nonatomic) long long targetingPurgeAmount;
@property (readonly, nonatomic) long long simulateOperation;
@property (readonly, nonatomic) long long simulateEnd;

+ (id)nameOfSimulateOperation:(long long)a0;
+ (id)nameOfSimulateEnd:(long long)a0;

- (id)summary;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initClearingAfter:(BOOL)a0;
- (id)initClearingAfter:(BOOL)a0 forcingUnlock:(BOOL)a1 limitedToAssetTypes:(id)a2 withVolumeToReclaim:(id)a3 withUrgency:(int)a4 targetingPurgeAmount:(long long)a5 simulateOperation:(long long)a6 simulateEnd:(long long)a7;
- (id)initClearingAfter:(BOOL)a0 limitedToAssetTypes:(id)a1;
- (id)initForSimulateOperation:(long long)a0 withSimulateEnd:(long long)a1;
- (id)initForcingUnlock:(BOOL)a0;
- (id)initWithVolumeToReclaim:(id)a0 withUrgency:(int)a1 targetingPurgeAmount:(long long)a2;

@end
