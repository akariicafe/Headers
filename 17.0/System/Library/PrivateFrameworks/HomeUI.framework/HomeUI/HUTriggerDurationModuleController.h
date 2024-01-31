@class NSString;
@protocol HUTriggerDurationModuleControllerDelegate;

@interface HUTriggerDurationModuleController : HUItemModuleController <HUTriggerDurationPickerDelegate>

@property (weak, nonatomic) id<HUTriggerDurationModuleControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (unsigned long long)didSelectItem:(id)a0;
- (id)_durationEventBuilder;
- (Class)cellClassForItem:(id)a0;
- (void)durationPicker:(id)a0 didSelectDuration:(id)a1;
- (void)setupCell:(id)a0 forItem:(id)a1;
- (void)updateCell:(id)a0 forItem:(id)a1 animated:(BOOL)a2;

@end
