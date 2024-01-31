@class NSString;
@protocol TSSIMSetupFlowDelegate;

@interface TSPRXSIMTransferCompleteViewController : PRXCardContentViewController <TSSetupFlowItem>

@property (weak) id<TSSIMSetupFlowDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;

@end
