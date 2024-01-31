@class NSURL, UIImage, NSString;

@interface CPSLearnMoreRequest : CPSAuthenticationRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSURL *URL;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) NSString *titleText;
@property (retain, nonatomic) NSString *subtitleText;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (long long)authType;
- (id)initWithCoder:(id)a0;

@end
