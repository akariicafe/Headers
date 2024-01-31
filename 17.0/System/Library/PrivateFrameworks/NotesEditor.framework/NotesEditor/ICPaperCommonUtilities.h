@interface ICPaperCommonUtilities : NSObject

@property (class, nonatomic, readonly) BOOL shouldShowLinksWhenComposingQuickNote;
@property (class, nonatomic, readonly) BOOL shouldResumeLastQuickNote;

+ (id)activitiesToExcludeForNote:(id)a0 currentUserActivity:(id)a1;

- (id)init;

@end
