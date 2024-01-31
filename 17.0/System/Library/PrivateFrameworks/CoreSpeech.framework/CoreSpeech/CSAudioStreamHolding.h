@class NSString;

@interface CSAudioStreamHolding : NSObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long clientIdentity;
@property (retain, nonatomic) NSString *recordModeLockUUIDString;
@property (retain, nonatomic) NSString *listeningMicIndicatorLockUUIDString;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 clientIdentity:(unsigned long long)a1;

@end
