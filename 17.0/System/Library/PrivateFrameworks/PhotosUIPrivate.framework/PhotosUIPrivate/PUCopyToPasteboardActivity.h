@class NSString;
@protocol PXActivityItemSourceController;

@interface PUCopyToPasteboardActivity : UICopyToPasteboardActivity <PXActivity>

@property (weak, nonatomic) id<PXActivityItemSourceController> itemSourceController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)activityTitle;
- (void).cxx_destruct;
- (BOOL)canPerformWithActivityItems:(id)a0;

@end
