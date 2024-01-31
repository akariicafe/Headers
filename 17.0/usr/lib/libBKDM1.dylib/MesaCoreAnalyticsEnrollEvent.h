@class NSNumber;

@interface MesaCoreAnalyticsEnrollEvent : MesaCoreAnalyticsEvent {
    BOOL _badImagePerFingerDown;
    BOOL _waitForFinish;
}

@property (retain) NSNumber *enrollResult;
@property (retain) NSNumber *overallResult;
@property (retain) NSNumber *overallTime;
@property (retain) NSNumber *touchesCount;
@property (retain) NSNumber *badImagesCount;
@property (retain) NSNumber *rejectedImagesCount;
@property (retain) NSNumber *enrolledUsersCount;
@property (retain) NSNumber *enrolledIdentityUserCount;
@property (retain) NSNumber *enrolledIdentityTotalCount;
@property (retain) NSNumber *scanGroupCount;
@property (retain) NSNumber *scanCount;
@property (retain) NSNumber *userID;

- (id)init;
- (void)reset;
- (id)initWithName:(id)a0;
- (void).cxx_destruct;
- (BOOL)postEvent;
- (void)enrollProgress:(id)a0;
- (void)handleStatusMessage:(unsigned int)a0 withData:(id)a1;
- (BOOL)isWaitingForFinish;
- (void)setFingerDetected:(id)a0;

@end
