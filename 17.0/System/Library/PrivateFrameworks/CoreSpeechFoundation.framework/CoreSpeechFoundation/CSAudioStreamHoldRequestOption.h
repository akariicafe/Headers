@interface CSAudioStreamHoldRequestOption : NSObject

@property (readonly, nonatomic) unsigned long long clientIdentity;
@property (readonly, nonatomic) double timeout;
@property (readonly, nonatomic) BOOL requireRecordModeLock;
@property (readonly, nonatomic) BOOL requireListeningMicIndicatorLock;

+ (id)defaultOptionWithTimeout:(double)a0;

- (id)xpcObject;
- (id)initWithXPCObject:(id)a0;
- (id)initWithTimeout:(double)a0 clientIdentity:(unsigned long long)a1 requireRecordModeLock:(BOOL)a2 requireListeningMicIndicatorLock:(BOOL)a3;

@end
