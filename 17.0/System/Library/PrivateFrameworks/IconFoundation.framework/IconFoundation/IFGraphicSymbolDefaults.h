@class NSString, IFColor;

@interface IFGraphicSymbolDefaults : NSObject

@property (readonly) NSString *symbolName;
@property (readonly) long long shape;
@property (readonly) long long renderingMode;
@property (readonly) long long symbolColor;
@property (readonly) long long symbolColorAlternate;
@property (readonly) long long enclosureColor;
@property (readonly) long long enclosureColorAlternate;
@property (readonly) long long fill;
@property (readonly) double enclosureSizeMultiplier;
@property (readonly) double borderWidth;
@property (readonly) IFColor *borderColorLightMode;
@property (readonly) IFColor *borderColorDarkMode;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;

@end
