@class NSString, MSMessagesAppViewController;

@interface _MSMessagesAppPresentationControllerDelegate : NSObject <UISheetPresentationControllerDelegate>

@property (weak, nonatomic) MSMessagesAppViewController *appViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)sheetPresentationControllerDidChangeSelectedDetentIdentifier:(id)a0;
- (id)initWithMessagesAppViewController:(id)a0;

@end
