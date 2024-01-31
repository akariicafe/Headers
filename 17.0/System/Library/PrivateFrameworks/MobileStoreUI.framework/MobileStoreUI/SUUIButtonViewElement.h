@class SUUIViewElementText, IKViewElementStyle, SUUIBuyButtonDescriptor, NSString, SUUIImageViewElement, IKDOMElement, SUUIStoreIdentifier;

@interface SUUIButtonViewElement : SUUIViewElement {
    SUUIViewElementText *_buttonText;
    char _enabled;
    NSString *_toggleItemIdentfier;
    IKDOMElement *_xml;
}

@property (retain, nonatomic) SUUIBuyButtonDescriptor *buyButtonDescriptor;
@property (readonly, nonatomic) BOOL autoIncrementCount;
@property (readonly, nonatomic, getter=isBigHitButton) BOOL bigHitButton;
@property (readonly, nonatomic) double bigHitSize;
@property (readonly, nonatomic) long long buttonViewType;
@property (readonly, nonatomic) long long buttonViewSubType;
@property (readonly, nonatomic) SUUIViewElementText *buttonText;
@property (readonly, nonatomic) IKViewElementStyle *buttonTitleStyle;
@property (readonly, nonatomic) NSString *confirmationText;
@property (readonly, nonatomic) NSString *nonToggledText;
@property (readonly, nonatomic) NSString *toggledText;
@property (readonly, nonatomic) NSString *badgeResourceName;
@property (readonly, nonatomic) SUUIImageViewElement *buttonImage;
@property (readonly, nonatomic) SUUIImageViewElement *additionalButtonImage;
@property (readonly, nonatomic) long long itemIdentifier;
@property (readonly, nonatomic) SUUIStoreIdentifier *storeIdentifier;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) long long dataPlaybackId;
@property (readonly, nonatomic) NSString *playItemIdentifier;
@property (readonly, nonatomic) NSString *sizeVariant;
@property (readonly, nonatomic) BOOL showOnDemand;
@property (readonly, nonatomic) NSString *toggleItemIdentifier;
@property (readonly, nonatomic) NSString *variantIdentifier;
@property (readonly, nonatomic, getter=isDisabledButSelectable) BOOL disabledButSelectable;
@property (readonly, nonatomic, getter=isSelected) BOOL selected;
@property (nonatomic, getter=isToggled) BOOL toggled;
@property (readonly, nonatomic) BOOL suppressCloudRestore;

- (void)dealloc;
- (id)description;
- (BOOL)isEnabled;
- (void).cxx_destruct;
- (unsigned long long)elementType;
- (id)_parseButtonText;
- (id)applyUpdatesWithElement:(id)a0;
- (id)initWithDOMElement:(id)a0 parent:(id)a1 elementFactory:(id)a2;
- (long long)pageComponentType;
- (id)personalizationLibraryItems;

@end
