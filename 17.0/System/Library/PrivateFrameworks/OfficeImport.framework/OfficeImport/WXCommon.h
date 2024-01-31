@class TCEnumerationMap;

@interface WXCommon : NSObject

@property (class, readonly) TCEnumerationMap *textDirectionEnumMap;
@property (class, readonly) TCEnumerationMap *strictTextDirectionEnumMap;
@property (class, readonly) TCEnumerationMap *justifyEnumMap;
@property (class, readonly) TCEnumerationMap *strictJustifyEnumMap;
@property (class, readonly) TCEnumerationMap *tableWidthTypeEnumMap;
@property (class, readonly) TCEnumerationMap *heightTypeEnumMap;
@property (class, readonly) TCEnumerationMap *numberFormatEnumMap;
@property (class, readonly) TCEnumerationMap *customNumberFormatEnumMap;

+ (void)initialize;

@end
