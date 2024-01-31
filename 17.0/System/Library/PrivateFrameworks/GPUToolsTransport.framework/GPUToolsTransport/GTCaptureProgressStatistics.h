@interface GTCaptureProgressStatistics : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long frameCount;
@property (nonatomic) unsigned long long frameOther;
@property (nonatomic) unsigned long long commitCount;
@property (nonatomic) unsigned long long commitOther;
@property (nonatomic) unsigned long long resourceCount;
@property (nonatomic) unsigned long long resourceDownloaded;
@property (nonatomic) unsigned long long GPUDataSize;
@property (nonatomic) unsigned long long GPUDataDownloaded;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
