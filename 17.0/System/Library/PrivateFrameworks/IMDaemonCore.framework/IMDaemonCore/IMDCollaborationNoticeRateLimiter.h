@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface IMDCollaborationNoticeRateLimiter : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *persistenceQueue;
@property (retain, nonatomic) NSMutableDictionary *noticeEventHistory;

+ (id)loadNoticeEventHistory;
+ (id)peristencePath;
+ (long long)defaultThreshold;
+ (long long)participantChangeThreshold;
+ (long long)commentThreshold;

- (id)init;
- (void)didSendNotice:(id)a0;
- (BOOL)shouldSendNotice:(id)a0;
- (long long)thresholdForNoticeType:(long long)a0;
- (id)dateLastUpdatedForURL:(id)a0;
- (void).cxx_destruct;
- (void)saveNoticeEventHistory;

@end
