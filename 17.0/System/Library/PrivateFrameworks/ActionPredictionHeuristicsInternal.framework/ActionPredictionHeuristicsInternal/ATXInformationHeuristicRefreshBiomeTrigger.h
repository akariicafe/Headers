@class BPSSink, BMBiomeScheduler, NSObject;
@protocol OS_dispatch_queue;

@interface ATXInformationHeuristicRefreshBiomeTrigger : ATXInformationHeuristicRefreshTrigger <NSSecureCoding> {
    long long _streamType;
    NSObject<OS_dispatch_queue> *_queue;
    BMBiomeScheduler *_scheduler;
    BPSSink *_sink;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)_start;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)_stop;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToATXInformationHeuristicRefreshBiomeTrigger:(id)a0;
- (id)_publisher;
- (id)initWithCoder:(id)a0;
- (id)initWithStreamType:(long long)a0;

@end
