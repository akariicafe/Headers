@class NSString, NSArray, NSURL, PCNativeStyle, PCNativeButton;

@interface PCNativeRepresentation : APRepresentationData

@property (nonatomic) long long adType;
@property (retain, nonatomic) NSString *accessibleAdCopy;
@property (retain, nonatomic) NSString *accessibleHeadline;
@property (retain, nonatomic) NSString *adCopy;
@property (retain, nonatomic) PCNativeStyle *defaultStyle;
@property (retain, nonatomic) NSArray *elements;
@property (retain, nonatomic) NSString *headline;
@property (retain, nonatomic) NSString *localeIdentifier;
@property (retain, nonatomic) NSString *sponsor;
@property (nonatomic) long long adFormatType;
@property (retain, nonatomic) NSURL *sponsoredByAssetURL;
@property (retain, nonatomic) PCNativeButton *button;
@property (retain, nonatomic) NSURL *actionURL;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
