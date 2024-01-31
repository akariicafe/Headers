@class NSString, NSArray, NSURL, PKApplyFooterContent;

@interface PKPayLaterDynamicContentPageItem : NSObject

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *contentTitle;
@property (copy, nonatomic) NSString *contentSubtitle;
@property (copy, nonatomic) NSString *contentDetailLeading;
@property (copy, nonatomic) NSString *contentDetailSubtitleLeading;
@property (copy, nonatomic) NSString *contentDetailTrailing;
@property (copy, nonatomic) NSString *linkText;
@property (copy, nonatomic) NSURL *linkURL;
@property (copy, nonatomic) NSString *systemImageName;
@property (copy, nonatomic) NSArray *systemImageColors;
@property (copy, nonatomic) NSArray *sections;
@property (copy, nonatomic) NSString *errorTitle;
@property (copy, nonatomic) NSString *altContentSubtitle;
@property (retain, nonatomic) PKApplyFooterContent *footerContent;
@property (retain, nonatomic) PKApplyFooterContent *altFooterContent;

- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
