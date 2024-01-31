@class NSData, NSString, NSURL;

@interface MCFontPayload : MCPayload

@property (retain, nonatomic) NSData *fontData;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSURL *persistentURL;

+ (id)localizedSingularForm;
+ (id)typeStrings;
+ (id)localizedPluralForm;

- (id)verboseDescription;
- (void).cxx_destruct;
- (id)title;
- (id)initWithDictionary:(id)a0 profile:(id)a1 outError:(id *)a2;
- (id)stubDictionary;
- (id)subtitle1Description;
- (id)subtitle1Label;

@end
