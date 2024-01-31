@class PKInk, NSString, _PKInkAttributesPickerView;
@protocol PKInkAttributesPickerDelegate;

@interface PKInkAttributesPicker : PKPaletteAttributeViewController <UIPopoverPresentationControllerDelegate, _PKInkAttributesPickerViewDelegate>

@property (class, readonly, nonatomic) double defaultMinimumOpacityValue;

@property (retain, nonatomic) _PKInkAttributesPickerView *pickerView;
@property (nonatomic) unsigned long long displayMode;
@property (nonatomic) double minimumOpacityValue;
@property (readonly, nonatomic, getter=isUpdatingOpacityValue) BOOL updatingOpacityValue;
@property (retain, nonatomic) PKInk *selectedInk;
@property (retain, nonatomic) id<PKInkAttributesPickerDelegate> delegate;
@property (nonatomic) long long colorUserInterfaceStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)_updateUI;
- (void)_inkAttributesPickerViewUserDidEndDraggingSlider:(id)a0;
- (void)_inkAttributesPickerViewUserDidStartDraggingSlider:(id)a0;
- (void)_notifyInkAttributesPickerDidChangeInk;
- (id)initWithInk:(id)a0 toolConfiguration:(id)a1;
- (void)inkAttributesPickerViewDidChangeInkOpacity:(id)a0;
- (void)inkAttributesPickerViewDidChangeInkThickness:(id)a0;
- (void)setSelectedInk:(id)a0 animated:(BOOL)a1;

@end
