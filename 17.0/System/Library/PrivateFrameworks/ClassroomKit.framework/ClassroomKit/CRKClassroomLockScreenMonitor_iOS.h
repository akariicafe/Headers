@class NSString;

@interface CRKClassroomLockScreenMonitor_iOS : NSObject <CRKClassroomLockScreenMonitoring> {
    int mDidAppearObserver;
    int mDidDismissObserver;
}

@property (nonatomic, getter=isClassroomLockScreenVisible) BOOL classroomLockScreenVisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startObserving;
- (id)init;
- (void)dealloc;
- (void)endObserving;
- (void)dismissClassroomLockScreen;
- (void)displayClassroomLockScreenWithLabel:(id)a0 passcode:(id)a1;

@end
