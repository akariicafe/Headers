@class NSString, TDThemeSize, NSNumber, TDFontSizeDefinition;

@interface TDMetafontSizeSelector : NSManagedObject

@property (retain, nonatomic) NSNumber *identifier;
@property (retain, nonatomic) NSString *selectorName;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) TDThemeSize *controlSize;
@property (retain, nonatomic) TDFontSizeDefinition *definition;

@end
