@class NSError, PSYActivityInfo;

@interface PSYSyncSessionActivity : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PSYActivityInfo *activityInfo;
@property (readonly, nonatomic) double activityProgress;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic, getter=isFinishedSending) BOOL finishedSending;
@property (readonly, nonatomic) unsigned long long activityState;
@property (readonly, nonatomic) long long interruptionCount;
@property (readonly, nonatomic) unsigned long long startDropoutCount;
@property (readonly, nonatomic) BOOL sawADropout;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithActivityInfo:(id)a0 progress:(double)a1 error:(id)a2 state:(unsigned long long)a3 finishedSending:(BOOL)a4 interruptionCount:(long long)a5 startDropoutCount:(unsigned long long)a6 sawADropout:(BOOL)a7;
- (id)syncSessionActivityByUpdatingProgress:(double)a0;

@end
