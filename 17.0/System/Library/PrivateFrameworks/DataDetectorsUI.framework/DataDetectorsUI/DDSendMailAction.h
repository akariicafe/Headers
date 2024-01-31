@class NSString;

@interface DDSendMailAction : DDAction <MFMailComposeViewControllerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)matchingScheme;

- (id)iconName;
- (id)localizedName;
- (id)notificationURL;
- (int)interactionType;
- (id)notificationTitle;
- (BOOL)canBePerformedByOpeningURL;
- (id)compactTitle;
- (id)notificationIconBundleIdentifier;
- (void)performFromView:(id)a0;

@end
