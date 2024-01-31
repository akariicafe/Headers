@class NSString, SSProximityDevice;
@protocol TSSIMSetupFlowDelegate;

@interface TSPRXPasscodeEntryViewController : PRXPasscodeEntryViewController <TSSetupFlowItem>

@property (weak) id<TSSIMSetupFlowDelegate> delegate;
@property (retain) SSProximityDevice *btDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
