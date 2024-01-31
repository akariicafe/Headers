@class NSString;

@interface XBLaunchCaptureInformation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long estimatedMemoryImpact;
@property (copy, nonatomic) NSString *caarFilePath;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
