@class NSString;

@interface ICNACoreAnalyticsReporter : ICNAOptedInObject

@property (retain) NSString *noteViewApproach;
@property (retain) NSString *currentlyViewedNoteIdentifier;

+ (id)analyticsQueue;
+ (id)sharedReporter;

- (id)init;
- (void).cxx_destruct;
- (void)appSessionWillEnd:(id)a0;
- (id)consumeNoteViewApproach;
- (void)fireDeepLinkCreationEventWithNote:(id)a0 contentItem:(id)a1;
- (void)fireNoteViewEventWithNote:(id)a0 noteData:(id)a1 noteContentData:(id)a2;
- (void)fireSnapshotWithNoteReportToDevice:(id)a0;
- (void)fireUpdateHandWritingContentEventWithNoteData:(id)a0 pencilIsUsed:(BOOL)a1;

@end
