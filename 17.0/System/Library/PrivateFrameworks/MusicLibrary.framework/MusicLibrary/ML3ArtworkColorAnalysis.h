@class NSString;

@interface ML3ArtworkColorAnalysis : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *backgroundColor;
@property (readonly, nonatomic) NSString *primaryTextColor;
@property (readonly, nonatomic) NSString *secondaryTextColor;
@property (readonly, nonatomic) NSString *tertiaryTextColor;
@property (readonly, nonatomic, getter=isBackgroundColorLight) BOOL backgroundColorLight;
@property (readonly, nonatomic, getter=isPrimaryTextColorLight) BOOL primaryTextColorLight;
@property (readonly, nonatomic, getter=isSecondaryTextColorLight) BOOL secondaryTextColorLight;
@property (readonly, nonatomic, getter=isTertiaryTextColorLight) BOOL tertiaryTextColorLight;

- (void)encodeWithCoder:(id)a0;
- (id)dictRepresentation;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithColorAnalysis:(id)a0;
- (id)initWithColorAnalysisDictionary:(id)a0;

@end
