@class CRKCourseEnrollmentController, NSMutableSet, CATSerialOperationQueue;
@protocol CRKExpiredCoursesInteractionDelegate, CRKRequestPerformingProtocol;

@interface CRKMonitorExpiredCoursesInteraction : CATOperation {
    BOOL mIsObservingEnrollmentController;
}

@property (readonly, nonatomic) id<CRKRequestPerformingProtocol> studentDaemonProxy;
@property (readonly, nonatomic) id<CRKExpiredCoursesInteractionDelegate> expiredCoursesInteractionDelegate;
@property (readonly, nonatomic) CRKCourseEnrollmentController *enrollmentController;
@property (readonly, nonatomic) NSMutableSet *expiredCoursesToPresent;
@property (readonly, nonatomic) CATSerialOperationQueue *serialOperationQueue;

- (void)main;
- (BOOL)isAsynchronous;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)cancel;
- (void)beginInteractionWithExpiredCourses:(id)a0;
- (void)expiredCoursesInteractionDidFinish:(id)a0;
- (id)initWithStudentDaemonProxy:(id)a0 enrollmentController:(id)a1 expiredCoursesInteractionDelegate:(id)a2;
- (void)updateWithCourses:(id)a0;

@end
