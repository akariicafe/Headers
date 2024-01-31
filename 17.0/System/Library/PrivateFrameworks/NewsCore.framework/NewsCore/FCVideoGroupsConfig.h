@class NSDictionary, NTPBVideoGroupsConfig;

@interface FCVideoGroupsConfig : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NTPBVideoGroupsConfig *pbVideoGroupsConfig;
@property (copy, nonatomic) NSDictionary *configDictionary;
@property (readonly, nonatomic) BOOL playsMutedByDefault;
@property (readonly, nonatomic) long long nowPlayingBarTime;
@property (readonly, nonatomic) long long upNextBarTime;
@property (readonly, nonatomic) long long moreFromPublisherBarTime;
@property (readonly, nonatomic) BOOL moreFromPublisherBarEnabled;
@property (nonatomic) unsigned long long moreVideosGroupSortOption;
@property (nonatomic) unsigned long long moreVideosGroupFilterOption;
@property (readonly, nonatomic) long long moreVideosGroupMinNumberOfVideos;
@property (readonly, nonatomic) long long moreVideosGroupMaxNumberOfVideos;

- (id)initWithConfigDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithVideoGroupsConfig:(id)a0;

@end
