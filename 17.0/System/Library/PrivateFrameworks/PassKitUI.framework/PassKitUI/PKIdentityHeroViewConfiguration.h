@class NSString, PKPaymentHeroImage;

@interface PKIdentityHeroViewConfiguration : NSObject

@property (retain, nonatomic) PKPaymentHeroImage *image;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSString *primaryButtonTitle;
@property (retain, nonatomic) NSString *secondaryButtonTitle;

- (void).cxx_destruct;
- (id)initWithImage:(id)a0 title:(id)a1 subtitle:(id)a2 primaryButtonTitle:(id)a3 secondaryButtonTitle:(id)a4;

@end
