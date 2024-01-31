@class NSSet, NSDateComponents, NSString;

@interface DDSAssetPolicy : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDateComponents *idleUsageEvictionPeriod;
@property (nonatomic) long long preferredDownloadFrequency;
@property (nonatomic) BOOL downloadOverCellular;
@property (nonatomic) BOOL downloadWithoutPower;
@property (copy, nonatomic) NSSet *notificationDownloadTriggers;
@property (copy, nonatomic) NSString *downloadCompletionNotification;

+ (id)assetPolicy;

- (id)init;
- (unsigned long long)hash;
- (id)dumpDescription;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToAssetPolicy:(id)a0;
- (id)stringForAssetDownloadFrequency:(long long)a0;

@end
