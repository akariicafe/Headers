@class NSArray;
@protocol HMDFollowUpController;

@interface HMDCoreFollowUpRemoveItemsOperation : HMFOperation

@property (copy, nonatomic) NSArray *identifiersToRemove;
@property (retain, nonatomic) id<HMDFollowUpController> followUpController;

- (void)main;
- (void).cxx_destruct;
- (id)initWithIdentifiersToRemove:(id)a0 followUpController:(id)a1;

@end
