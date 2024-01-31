@class NSData, NSString;

@interface CSAddressingViewModel : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *headerImageData;
@property (retain, nonatomic) NSString *headerTitle;
@property (retain, nonatomic) NSString *loadingText;
@property (retain, nonatomic) NSString *supplementaryText;
@property (retain, nonatomic) NSString *userInfoText;
@property (retain, nonatomic) NSString *primaryButtonText;
@property (retain, nonatomic) NSString *secondaryButtonText;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithHeaderImageData:(id)a0 headerTitle:(id)a1 loadingText:(id)a2 supplementaryText:(id)a3 userInfoText:(id)a4 primaryButtonText:(id)a5 secondaryButtonText:(id)a6;

@end
