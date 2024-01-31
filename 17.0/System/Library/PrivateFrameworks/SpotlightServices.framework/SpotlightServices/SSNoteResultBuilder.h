@class NSString, NSDate;

@interface SSNoteResultBuilder : SSResultBuilder

@property (retain, nonatomic) NSString *title;
@property (nonatomic) BOOL isShared;
@property (nonatomic) BOOL isLocked;
@property (retain, nonatomic) NSDate *modificationDate;
@property (retain, nonatomic) NSString *formattedBody;
@property (retain, nonatomic) NSString *folder;
@property (retain, nonatomic) NSString *account;

+ (id)bundleId;
+ (BOOL)isCoreSpotlightResult;

- (id)initWithResult:(id)a0;
- (void).cxx_destruct;
- (id)buildCompactCardSection;
- (id)buildInlineCardSection;
- (id)buildTitle;

@end
