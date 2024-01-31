@class NSString;
@protocol CDPWalrusStatusProvider, CDPWebAccessStatusUpdater, CDPWebAccessStatusProvider;

@interface CDPUIWebAccessStatusChangeModel : NSObject <CDPUIStatusChangeModel> {
    id<CDPWebAccessStatusProvider> _webAccessStatusProvider;
    id<CDPWebAccessStatusUpdater> _webAccessStatusUpdater;
    id<CDPWalrusStatusProvider> _walrusStatusProvider;
}

@property (readonly, nonatomic) unsigned long long targetStatus;
@property (readonly, nonatomic) NSString *titleText;
@property (readonly, nonatomic) NSString *messageText;
@property (readonly, nonatomic) NSString *primaryButtonText;
@property (readonly, nonatomic) NSString *cancelButtonText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
