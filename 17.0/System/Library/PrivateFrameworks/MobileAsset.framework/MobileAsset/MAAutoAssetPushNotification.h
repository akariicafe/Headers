@class NSString, MAAutoAssetUpdatePolicy, NSDictionary;

@interface MAAutoAssetPushNotification : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long pushReason;
@property (readonly, retain, nonatomic) NSString *assetType;
@property (readonly, retain, nonatomic) NSString *assetSpecifier;
@property (readonly, retain, nonatomic) NSString *assetVersion;
@property (readonly, retain, nonatomic) MAAutoAssetUpdatePolicy *autoUpdatePolicy;
@property (retain, nonatomic) NSDictionary *additionalPushParameters;
@property (readonly, retain, nonatomic) NSDictionary *historyRepresentation;

+ (id)pushReasonName:(long long)a0;

- (id)summary;
- (void)encodeWithCoder:(id)a0;
- (id)newSummaryDictionary;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithPushReason:(long long)a0;
- (id)initWithPushReason:(long long)a0 forAssetType:(id)a1 withAssetSpecifier:(id)a2 matchingAssetVersion:(id)a3;
- (id)initWithPushReason:(long long)a0 forAssetType:(id)a1 withAssetSpecifier:(id)a2 matchingAssetVersion:(id)a3 withUpdatePolicy:(id)a4;
- (id)initWithPushReason:(long long)a0 forAssetType:(id)a1 withAssetSpecifier:(id)a2 matchingAssetVersion:(id)a3 withUpdatePolicy:(id)a4 withAdditional:(id)a5;
- (id)newAssetName;
- (id)pushReasonName;

@end
