@interface NMSPodcastSizeInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long totalSize;
@property (nonatomic) double totalDuration;
@property (nonatomic) unsigned long long count;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)averageSize;
- (double)sizeDurationRatio;

@end
