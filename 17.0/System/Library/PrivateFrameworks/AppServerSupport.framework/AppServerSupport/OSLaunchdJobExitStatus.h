@interface OSLaunchdJobExitStatus : NSObject

@property (readonly, nonatomic) unsigned long long os_reason_flags;
@property (readonly, nonatomic) unsigned int os_reason_namespace;
@property (readonly, nonatomic) unsigned long long os_reason_code;
@property (readonly, nonatomic) int wait4Status;

- (id)initWithWait4Status:(int)a0 os_reason_namespace:(unsigned int)a1 os_reason_code:(unsigned long long)a2 os_reason_flags:(unsigned long long)a3;
- (id)description;

@end
