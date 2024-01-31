@class NSString, NSDictionary, ICASSessionSummaryData, NSObject;
@protocol OS_dispatch_queue;

@interface ICNAMultiSceneSessionTracker : NSObject

@property (retain, nonatomic) NSDictionary *sceneSessionTrackers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *isolationQueue;
@property (nonatomic, getter=isInvalidated) BOOL invalidated;
@property (readonly, nonatomic) NSString *sessionDetailDescription;
@property (readonly, nonatomic) ICASSessionSummaryData *sessionSummaryData;
@property (readonly, nonatomic) long long sessionDetailType;
@property (readonly, nonatomic) BOOL hasLiveTimers;

- (BOOL)invalidated;
- (id)init;
- (void).cxx_destruct;
- (void)endPaperSession;
- (void)endNotesSession;
- (void)endAllSessionsAndInvalidate;
- (BOOL)isInvalidatedThreadUnsafe;
- (void)startNotesSession;
- (void)startPaperSession;

@end
