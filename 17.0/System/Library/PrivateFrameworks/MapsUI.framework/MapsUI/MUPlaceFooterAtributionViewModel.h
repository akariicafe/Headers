@class NSArray, NSString;

@interface MUPlaceFooterAtributionViewModel : MUPlaceSectionFooterViewModel

@property (copy, nonatomic) NSArray *providerNames;
@property (readonly, nonatomic) NSString *formatString;
@property (readonly, nonatomic, getter=isInteractable) BOOL interactable;

+ (id)viewModelForMapItemAttribution:(id)a0;
+ (id)_attributionViewModelForProviderName:(id)a0 attributionURLs:(id)a1;
+ (id)interactableVendorAttributionFormatString;
+ (id)nonInteractableVendorAttributionFormatString;
+ (id)transitAttributionFormatString;
+ (id)viewModelForGeoMapItemAttribution:(id)a0;
+ (id)viewModelForMapItem:(id)a0 transitLine:(id)a1;

- (id)attributedText;
- (void).cxx_destruct;
- (id)initWithFormatString:(id)a0 providerNames:(id)a1 isInteractable:(BOOL)a2;

@end
