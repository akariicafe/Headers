@class NSObject;
@protocol OS_dispatch_queue;

@interface SUSpacePurgeOptions : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue;
@property (nonatomic) unsigned long long neededBytes;
@property (nonatomic) BOOL enableCacheDelete;
@property (nonatomic) int cacheDeleteUrgency;
@property (nonatomic) BOOL enableAppOffload;
@property (nonatomic) long long appOffloadUrgency;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
