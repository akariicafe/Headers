@class ATXScreenLogUnlockSession, NSMutableArray;

@interface ATXHomeScreenLogUnlockSessionManager : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL isInSession;
@property (retain, nonatomic) ATXScreenLogUnlockSession *currentSession;
@property (retain, nonatomic) NSMutableArray *completedSessions;

+ (id)currentSettings;
+ (id)_currentSettings;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)_eventStatusWithUIEvent:(id)a0;
- (void)_updateCurrentSessionWithUIEvent:(id)a0 eventStatus:(long long)a1;
- (id)initWithIsInSession:(BOOL)a0 currentSession:(id)a1 completedSessions:(id)a2;
- (BOOL)isEqualToATXHomeScreenLogUnlockSessionManager:(id)a0;
- (id)removeCompletedSessions;
- (id)summarizeCompletedSessions;
- (long long)updateSessionStateWithUIEvent:(id)a0;

@end
