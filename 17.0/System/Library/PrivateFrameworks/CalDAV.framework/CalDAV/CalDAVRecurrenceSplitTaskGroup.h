@class NSURL, NSArray;
@protocol CalDAVRecurrenceSplitTaskGroupDelegate;

@interface CalDAVRecurrenceSplitTaskGroup : CoreDAVTaskGroup {
    NSURL *_folderURL;
    NSArray *_actions;
}

@property (weak, nonatomic) id<CalDAVRecurrenceSplitTaskGroupDelegate> delegate;

- (void)startTaskGroup;
- (void).cxx_destruct;
- (id)initWithCalendar:(id)a0 accountInfoProvider:(id)a1 taskManager:(id)a2;

@end
