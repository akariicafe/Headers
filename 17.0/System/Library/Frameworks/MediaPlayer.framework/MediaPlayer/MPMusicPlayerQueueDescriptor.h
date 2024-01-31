@class NSString, NSDictionary;

@interface MPMusicPlayerQueueDescriptor : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (nonatomic) BOOL disableQueueModifications;
@property (nonatomic) long long shuffleType;
@property (nonatomic) long long repeatType;
@property (nonatomic, setter=setPrivate:) BOOL isPrivate;
@property (readonly, nonatomic) NSString *requestingBundleIdentifier;
@property (readonly, nonatomic) NSString *requestingBundleVersion;
@property (copy, nonatomic) NSString *playActivityQueueGroupingID;
@property (copy, nonatomic) NSString *playActivityFeatureName;
@property (readonly, nonatomic) NSDictionary *startTimes;
@property (readonly, nonatomic) NSDictionary *endTimes;
@property (nonatomic) BOOL prioritizeStartupOverQuality;

- (id)_init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_setEndTime:(double)a0 forIdentifiers:(id)a1;
- (void)_setStartTime:(double)a0 forIdentifiers:(id)a1;

@end
