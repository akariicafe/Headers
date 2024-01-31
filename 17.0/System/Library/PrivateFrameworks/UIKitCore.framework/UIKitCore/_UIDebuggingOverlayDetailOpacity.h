@class UIView;

@interface _UIDebuggingOverlayDetailOpacity : _UIDebuggingOverlayDetail {
    UIView *_view;
    UIView *_inspectedView;
}

- (id)view;
- (void).cxx_destruct;
- (void)_sliderValueChanged:(id)a0;
- (void)_updateForInspectedView:(id)a0;

@end
