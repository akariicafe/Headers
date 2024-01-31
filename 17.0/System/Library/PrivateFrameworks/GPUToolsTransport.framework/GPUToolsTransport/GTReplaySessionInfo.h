@class NSURL;

@interface GTReplaySessionInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSURL *gputraceURL;
@property (nonatomic) unsigned long long shaderDebuggerVersion;
@property (nonatomic) unsigned long long shaderProfilerVersion;
@property (nonatomic) unsigned long long accelerationViewerVersion;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
