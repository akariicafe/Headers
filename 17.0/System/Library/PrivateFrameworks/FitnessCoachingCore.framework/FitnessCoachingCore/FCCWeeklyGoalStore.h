@class NSUserDefaults;

@interface FCCWeeklyGoalStore : NSObject {
    NSUserDefaults *_userDefaults;
}

- (id)init;
- (void)clearContext;
- (void).cxx_destruct;
- (id)currentDisplayContext;
- (void)updateDisplayContext:(id)a0;

@end
