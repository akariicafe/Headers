@class NSString;

@interface SKUIITunesPassConfiguration : NSObject {
    NSString *_dialogLearnMoreButton;
    NSString *_dialogMessage;
    NSString *_dialogNotNowButton;
    NSString *_dialogTitle;
}

@property (readonly, nonatomic) NSString *lockupDescription;
@property (readonly, nonatomic) NSString *lockupLearnMoreLinkTitle;
@property (readonly, nonatomic) NSString *lockupTitle;
@property (readonly, nonatomic) NSString *learnMoreAddPassButtonTitle;
@property (readonly, nonatomic) NSString *learnMoreDoneButtonTitle;
@property (readonly, nonatomic) NSString *learnMoreExplanation;
@property (readonly, nonatomic) NSString *learnMoreTitle;
@property (readonly, nonatomic) NSString *learnMoreViewPassButtonTitle;

- (void).cxx_destruct;
- (id)initWithITunesPassDictionary:(id)a0 clientContext:(id)a1;
- (id)learnMoreAlertView;

@end
