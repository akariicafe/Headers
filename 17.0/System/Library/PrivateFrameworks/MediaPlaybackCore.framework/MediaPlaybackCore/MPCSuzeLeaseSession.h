@class ICSuzeLeaseSession;

@interface MPCSuzeLeaseSession : NSObject

@property (readonly, nonatomic) ICSuzeLeaseSession *icSuzeLeaseSession;

- (void).cxx_destruct;
- (void)endAutomaticallyRefreshingLease;
- (void)beginAutomaticallyRefreshingLease;
- (id)initWithICSuzeLeaseSession:(id)a0;

@end
