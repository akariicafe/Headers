@class NSString;

@interface DDTextMessageAction : DDTelephoneNumberAction <MFMessageComposeViewControllerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)matchingScheme;

- (id)viewController;
- (id)iconName;
- (id)subtitle;
- (id)localizedName;
- (id)notificationURL;
- (int)interactionType;
- (id)notificationTitle;
- (void)messageComposeViewController:(id)a0 didFinishWithResult:(long long)a1;
- (BOOL)canBePerformedByOpeningURL;
- (id)notificationIconBundleIdentifier;
- (void)performFromView:(id)a0;
- (BOOL)prefersOpenToCreate;

@end
