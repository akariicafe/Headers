@class CUIKAccountsController;

@interface CalendarAccountsController : NSObject {
    CUIKAccountsController *_controller;
}

+ (id)sharedInstance;
+ (void)invalidate;

- (id)accountTypeTitleForSource:(id)a0;
- (id)init;
- (id)initWithController:(id)a0;
- (int)sortOrderForSource:(id)a0;
- (id)titleForSource:(id)a0 forBeginningOfSentence:(BOOL)a1;
- (BOOL)haveiCloudCalendarAccountInSources:(id)a0;
- (int)sortOrderForSourceType:(long long)a0;
- (void).cxx_destruct;
- (id)accountTypeTitleForSourceWithExternalId:(id)a0;
- (BOOL)sourceIsManaged:(id)a0;

@end
