@class MPMusicPlayerQueueDescriptor, NSString, NSDictionary, NSData, MPAVItem, NSNumber, ICUserIdentity;

@interface MPPlaybackContext : NSObject <NSSecureCoding, NSCopying> {
    MPAVItem *_playerCurrentItem;
}

@property (class, readonly, nonatomic) BOOL supportsAutoPlay;
@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) ICUserIdentity *userIdentity;
@property (copy, nonatomic) NSNumber *privateListeningOverride;
@property (nonatomic) long long actionAfterQueueLoad;
@property (readonly, nonatomic) BOOL containsRestorableContent;
@property (readonly, nonatomic) BOOL shouldBecomeActive;
@property (nonatomic) long long shuffleType;
@property (nonatomic) long long repeatType;
@property (nonatomic) long long queueEndAction;
@property (readonly, nonatomic, getter=isSupported) BOOL supported;
@property (copy, nonatomic) NSString *playActivityQueueGroupingID;
@property (copy, nonatomic) NSString *playActivityFeatureName;
@property (copy, nonatomic) NSData *playActivityRecommendationData;
@property (copy, nonatomic) MPMusicPlayerQueueDescriptor *queueDescriptor;
@property (copy, nonatomic) NSString *siriAssetInfo;
@property (copy, nonatomic) NSString *siriReferenceIdentifier;
@property (copy, nonatomic) NSDictionary *siriWHAMetricsInfo;
@property (copy, nonatomic) NSString *sessionIdentifier;
@property (copy, nonatomic) NSString *overrideSILSectionID;

+ (Class)queueFeederClass;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clearStartItem;
- (id)descriptionComponents;
- (BOOL)isReusableForPlaybackContext:(id)a0;

@end
