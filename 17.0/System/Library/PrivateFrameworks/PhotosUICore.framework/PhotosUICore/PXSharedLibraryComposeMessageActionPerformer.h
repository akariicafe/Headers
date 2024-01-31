@class NSString, NSArray, NSURL, MFMessageComposeViewController;

@interface PXSharedLibraryComposeMessageActionPerformer : PXActionPerformer <MFMessageComposeViewControllerDelegate> {
    NSURL *_invitationURL;
    NSString *_displayName;
    NSArray *_recipients;
    MFMessageComposeViewController *_messageComposeViewController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
