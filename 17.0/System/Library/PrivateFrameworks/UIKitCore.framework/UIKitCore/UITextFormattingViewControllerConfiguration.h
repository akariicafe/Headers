@interface UITextFormattingViewControllerConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, setter=_setHasPopoverPresentation:) BOOL _hasPopoverPresentation;
@property (nonatomic, setter=_setPresentationSourceIsInputAssistantItem:) BOOL _presentationSourceIsInputAssistantItem;
@property (nonatomic, setter=_setShouldDeferColorPickerPresentationToHost:) BOOL _shouldDeferColorPickerPresentationToHost;
@property (nonatomic, setter=_setShouldDeferFontPickerPresentationToHost:) BOOL _shouldDeferFontPickerPresentationToHost;
@property (nonatomic, setter=_setUseLandscapeLayout:) BOOL _useLandscapeLayout;
@property (nonatomic, setter=_setBottomInset:) double _bottomInset;
@property (nonatomic) BOOL _preferringDimmingVisible;
@property (nonatomic) BOOL _allowContentToScroll;
@property (nonatomic) BOOL _includeDefaultFont;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
