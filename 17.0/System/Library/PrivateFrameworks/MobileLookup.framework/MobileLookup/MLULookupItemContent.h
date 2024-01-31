@class NSURL, UIViewController, CNContact;

@interface MLULookupItemContent : NSObject

@property (nonatomic) unsigned long long commitType;
@property (retain, nonatomic) UIViewController *commitViewController;
@property (retain, nonatomic) NSURL *commitURL;
@property BOOL valid;
@property (retain, nonatomic) UIViewController *previewViewController;
@property (readonly, nonatomic) CNContact *contact;

+ (id)contentWithAttachments:(id)a0 currentAttachmentIndex:(unsigned long long)a1;
+ (id)contentWithText:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (id)contentWithURL:(id)a0 result:(struct __DDResult { } *)a1 documentProperties:(id)a2;

- (id)children;
- (id)requiredEntitlements;
- (void).cxx_destruct;
- (void)dismissViewController;
- (BOOL)wantsSeamlessCommit;
- (void)setupViewControllerInCommitMode;
- (BOOL)commitPreviewInController:(id)a0;

@end
