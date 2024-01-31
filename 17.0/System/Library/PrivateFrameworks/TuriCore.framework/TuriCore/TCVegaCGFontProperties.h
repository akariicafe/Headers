@class NSString;

@interface TCVegaCGFontProperties : NSObject

@property (retain, nonatomic) NSString *cssFontString;
@property (retain, nonatomic) NSString *fontFamily;
@property (retain, nonatomic) NSString *fontSize;
@property (retain, nonatomic) NSString *fontStyle;
@property (retain, nonatomic) NSString *fontWeight;
@property (retain, nonatomic) NSString *fontVariant;
@property (retain, nonatomic) NSString *lineHeight;

- (void).cxx_destruct;
- (id)initWithString:(id)a0;

@end
