@class NSString, UIImageView;

@interface SiriUIDisambiguationItem : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *headingText;
@property (copy, nonatomic) NSString *extraDisambiguationText;
@property (copy, nonatomic) NSString *extraDisambiguationSubText;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } titleBoldedRange;
@property (retain, nonatomic) UIImageView *imageView;
@property (nonatomic) BOOL showsFavoriteStar;

+ (id)disambiguationItem;

- (void).cxx_destruct;

@end
