@class PKApplyActionContent, NSString, PKApplyFooterContent, PKDynamicProvisioningPageLearnMoreContent;

@interface PKDynamicProvisioningPageContent : NSObject <NSCopying>

@property (nonatomic) unsigned long long pageNumber;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *altSubtitle;
@property (nonatomic) unsigned long long altSubtitleTimeInterval;
@property (copy, nonatomic) NSString *body;
@property (copy, nonatomic) NSString *footnote;
@property (copy, nonatomic) NSString *footnoteDisclosure;
@property (copy, nonatomic) NSString *primaryActionTitle;
@property (copy, nonatomic) NSString *altPrimaryActionTitle;
@property (copy, nonatomic) NSString *primaryActionIdentifier;
@property (copy, nonatomic) NSString *secondaryActionTitle;
@property (copy, nonatomic) NSString *secondaryActionIdentifier;
@property (copy, nonatomic) NSString *disclosureTitle;
@property (retain, nonatomic) NSString *heroImageURL;
@property (retain, nonatomic) PKDynamicProvisioningPageLearnMoreContent *learnMore;
@property (retain, nonatomic) PKDynamicProvisioningPageLearnMoreContent *secondaryActionItem;
@property (retain, nonatomic) PKDynamicProvisioningPageContent *loadingPageContent;
@property (retain, nonatomic) PKApplyActionContent *actionContent;
@property (retain, nonatomic) PKApplyFooterContent *footerContent;
@property (nonatomic) unsigned long long layout;
@property (nonatomic) unsigned char contentAlignment;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictonary:(id)a0;
- (BOOL)isEmptyPage;

@end
