@class NSDictionary;

@interface DTSysmonTapMessage : DTTapMessage <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned int tapVersion;
@property (copy, nonatomic) NSDictionary *runningMetadata;

- (id)sessionMetadata;
- (void).cxx_destruct;
- (void)setSessionMetadata:(id)a0;

@end
