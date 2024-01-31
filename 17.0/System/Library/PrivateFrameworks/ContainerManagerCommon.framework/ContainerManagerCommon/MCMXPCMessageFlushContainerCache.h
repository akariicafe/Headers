@interface MCMXPCMessageFlushContainerCache : MCMXPCMessageWithContainerClassBase <MCMParametersFlushContainerCache>

@property (readonly, nonatomic) BOOL transient;
@property (readonly, nonatomic) unsigned long long containerClass;

@end
