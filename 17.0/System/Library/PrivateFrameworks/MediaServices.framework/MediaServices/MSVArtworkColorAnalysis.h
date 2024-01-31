@class NSString;

@interface MSVArtworkColorAnalysis : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *backgroundColorHex;
@property (retain, nonatomic) NSString *primaryTextColorHex;
@property (retain, nonatomic) NSString *secondaryTextColorHex;
@property (retain, nonatomic) NSString *tertiaryTextColorHex;
@property (readonly, nonatomic, getter=isBackgroundColorLight) BOOL backgroundColorLight;
@property (readonly, nonatomic, getter=isPrimaryTextColorLight) BOOL primaryTextColorLight;
@property (readonly, nonatomic, getter=isSecondaryTextColorLight) BOOL secondaryTextColorLight;
@property (nonatomic, getter=isTertiaryTextColorLight) BOOL tertiaryTextColorLight;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_copyWithClass:(Class)a0;

@end
