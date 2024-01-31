@class NSNumber;

@interface MTRFaultInjectionClusterFailAtFaultParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *type;
@property (copy, nonatomic) NSNumber *id;
@property (copy, nonatomic) NSNumber *numCallsToSkip;
@property (copy, nonatomic) NSNumber *numCallsToFail;
@property (copy, nonatomic) NSNumber *takeMutex;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
