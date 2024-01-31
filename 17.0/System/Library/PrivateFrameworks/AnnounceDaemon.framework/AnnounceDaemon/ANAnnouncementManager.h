@class NSUUID, NSMutableDictionary, NSArray, NSObject;
@protocol OS_dispatch_queue, OS_os_log, ANAnnouncementManagerDelegte;

@interface ANAnnouncementManager : NSObject

@property (readonly, nonatomic) NSMutableDictionary *timers;
@property (readonly, nonatomic) NSMutableDictionary *homeAnnouncements;
@property (nonatomic) BOOL timersSuspended;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly, nonatomic) NSObject<OS_os_log> *log;
@property (readonly, nonatomic) NSUUID *endpointID;
@property (weak, nonatomic) id<ANAnnouncementManagerDelegte> delegate;
@property (readonly, nonatomic) NSArray *allAnnouncementsSortedByReceipt;

+ (id)managerWithEndpointID:(id)a0;

- (void)cleanForExit;
- (void)_startTimer:(id)a0;
- (void)pauseAllTimers;
- (void)resumeAllTimers;
- (void)_addAnnouncementToReceiveQueue:(id)a0;
- (id)announcementForID:(id)a0;
- (id)initWithEndpointID:(id)a0;
- (void)removeAllAnnouncements;
- (void)_loadStoredAnnouncements;
- (BOOL)_updateAnnouncement:(id)a0 withContentsOfAnnouncement:(id)a1 home:(id)a2 groupID:(id)a3;
- (id)announcementsForGroupID:(id)a0;
- (void)_handleExpiredTimer:(id)a0 withID:(id)a1;
- (void)addAnnouncement:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)_shouldAccept:(id)a0 accept:(id /* block */)a1;
- (void)_suspendTimer:(id)a0;
- (void)removeOldAnnouncements;
- (void)resetAllTimers;
- (void)_removeAnnouncementWithID:(id)a0;
- (BOOL)_addAnnouncement:(id)a0 home:(id)a1 groupID:(id)a2;
- (id)announcementsForIDs:(id)a0;
- (void).cxx_destruct;
- (void)_cleanDirectory;
- (void)updateAnnouncement:(id)a0 statusFlags:(unsigned long long)a1;
- (void)_removeAnnouncementsForGroupID:(id)a0;
- (void)_notifyDelegateAnnouncementsChangedForGroupID:(id)a0;
- (void)_startTimerWithID:(id)a0;
- (void)_resetTimer:(id)a0;
- (void)_removeAnnouncementsHittingStorageAgeLimit;

@end
