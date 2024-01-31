@class NSString, IOSurface, NSArray;

@interface CKContextDonationItem : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *debugText;
@property (retain, nonatomic) NSString *debugUrlString;
@property (copy, nonatomic, setter=setText:) NSString *text;
@property (copy, nonatomic, setter=setTitle:) NSString *title;
@property (copy, nonatomic, setter=setContentDescription:) NSString *contentDescription;
@property (copy, nonatomic, setter=setContentKeywords:) NSString *contentKeywords;
@property (copy, nonatomic, setter=setContentAuthor:) NSString *contentAuthor;
@property (copy, nonatomic, setter=setRawHTML:) NSString *rawHTML;
@property (copy, nonatomic) NSString *languageTag;
@property (retain, nonatomic, setter=setLeadImage:) IOSurface *leadImage;
@property (retain, nonatomic, setter=setSnapshot:) IOSurface *snapshot;
@property (retain, nonatomic) NSArray *uiElements;
@property (retain, nonatomic) NSArray *extractionItems;

+ (void)initialize;
+ (id)trimTextToSize:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
