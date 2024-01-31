@class NSString, AALocalContactInfo;

@interface AAAccountContactPromptModel : NSObject

@property (retain, nonatomic) AALocalContactInfo *contact;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *detailsLabel;
@property (copy, nonatomic) NSString *detailsSubtitle;
@property (copy, nonatomic) NSString *primaryActionText;
@property (copy, nonatomic) NSString *secondaryActionText;
@property (copy, nonatomic) NSString *destructiveActionText;
@property (copy, nonatomic) NSString *destructiveActionSheetTitle;
@property (copy, nonatomic) NSString *destructiveActionSheetDetails;
@property (copy, nonatomic) NSString *destructiveActionSheetCancelText;
@property (copy, nonatomic) NSString *doneButtonTitle;
@property (nonatomic) BOOL primaryActionRequiresAuth;
@property (nonatomic) BOOL destructiveActionRequiresAuth;

- (id)init;
- (void).cxx_destruct;

@end
