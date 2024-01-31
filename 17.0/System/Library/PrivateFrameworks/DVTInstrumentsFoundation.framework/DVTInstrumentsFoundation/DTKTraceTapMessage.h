@class NSDictionary;

@interface DTKTraceTapMessage : DTTapMessage <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned int tapVersion;
@property (nonatomic) unsigned long long coreCount;
@property (nonatomic) unsigned long long triggerCount;
@property (copy, nonatomic) NSDictionary *triggerMetadata;
@property (copy, nonatomic) NSDictionary *sessionMetadata;
@property (nonatomic) unsigned long long triggerIndex;
@property (nonatomic) unsigned long long logicalProcessorCore;
@property (nonatomic) unsigned long long recordCount;

@end
