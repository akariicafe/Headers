@interface EKEventConferenceInformationDetailItem : EKEventTextDetailItem

+ (id)moreButtonLabel;
+ (id /* block */)textFromEventBlock;
+ (id)titleForCell;
+ (id)titleForExtendedViewController;

- (id)textForExtendedViewController;
- (id)textForCopyAction;
- (BOOL)configureWithCalendar:(id)a0 preview:(BOOL)a1;

@end
