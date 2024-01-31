@class NSArray, NSString, WBSNamedColorOption;

@interface WBSCoreProfilesConstants : NSObject

@property (class, readonly, copy, nonatomic) NSArray *availableSymbolImageNames;
@property (class, readonly, copy, nonatomic) NSArray *orderedProfileColorOptions;
@property (class, readonly, copy, nonatomic) NSString *defaultPersonalProfileSymbolImage;
@property (class, readonly, copy, nonatomic) WBSNamedColorOption *defaultPersonalProfileColor;

+ (id)_availableSymbolImageNamesToAccessibilityLabels;
+ (id)accessibilityLabelForSymbol:(id)a0;

@end
