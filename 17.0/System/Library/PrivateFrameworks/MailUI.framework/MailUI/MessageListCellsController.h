@class EFLocked, NSMutableDictionary, NSString, NSMutableArray, NSObject, EMCoreAnalyticsCollector;
@protocol OS_os_log, EFCancelable;

@interface MessageListCellsController : NSObject <EFLoggable> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _analyticsLock;
    NSMutableArray *_rawFlickerDurations;
    NSMutableDictionary *_bucketedFlickerDurations;
}

@property (class, readonly) NSObject<OS_os_log> *log;

@property (retain, nonatomic) EFLocked *visibleItemIDs;
@property (retain, nonatomic) id<EFCancelable> currentUpdateToken;
@property (readonly, nonatomic) EMCoreAnalyticsCollector *analyticsCollector;
@property (nonatomic) long long loadAttempts;
@property (nonatomic) long long loadFailures;
@property (retain, nonatomic) NSMutableDictionary *failureCodeCount;
@property (nonatomic) long long numberOfVisibleCells;
@property (nonatomic) long long numberOfFlickeringCells;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)markItemIDsAsVisibleBeforeUpdate:(id)a0;
- (void)reportCellDidLoad:(BOOL)a0 error:(id)a1;
- (void)reportFlickeringCell:(BOOL)a0 duration:(double)a1;
- (void)reportMessageListCellMetrics;
- (BOOL)wasItemRecentlyVisible:(id)a0;

@end
