@class NSString;

@interface SXComponentTextRules : NSObject <NSCopying>

@property (nonatomic) double fontResizingTresholdFactor;
@property (nonatomic) double fontSizeConstant;
@property (nonatomic) double lineHeightConstant;
@property (nonatomic) double dropCapConstant;
@property (nonatomic) BOOL shouldHyphenate;
@property (nonatomic) BOOL isSelectable;
@property (nonatomic) BOOL allowsScrollPositionRestore;
@property (nonatomic) long long textFlow;
@property (copy, nonatomic) NSString *fontTextStyle;

+ (id)bodyTextRules;
+ (id)defaultTextRules;
+ (id)headingTextRules;
+ (id)smallTextRules;
+ (id)titleTextRules;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
