@class NSString, TSWPStorage, NSDate, NSObject, TSKFormat;

@interface TSTCellFormatAndValue : NSObject <NSCopying, TSTCellDiffing, TSSPropertyCommandSerializing> {
    unsigned char _valueType : 8;
    BOOL _useAllSpareFormats;
    BOOL _suppressApplyValue;
    BOOL _applySpareFormatOnly;
    unsigned int _spareFormatType;
    BOOL _boolValue;
    struct TSUDecimal { struct { unsigned long long w[2]; } _decimal; } _decimalValue;
    NSObject *_objValue;
    NSString *_formattedValue;
    TSWPStorage *_formattedRichTextStorage;
    unsigned short _explicitFlags;
    unsigned char _cellFormatKind;
    TSKFormat *_numberFormat;
    TSKFormat *_currencyFormat;
    TSKFormat *_dateFormat;
    TSKFormat *_durationFormat;
    TSKFormat *_booleanFormat;
    TSKFormat *_textFormat;
}

@property (readonly, copy, nonatomic) NSDate *dateValue;
@property (readonly, nonatomic) unsigned char valueType;
@property (readonly, nonatomic) struct TSUDecimal { struct { unsigned long long x0[2]; } x0; } numberOrCurrencyDecimalValue;
@property (readonly, copy, nonatomic) NSString *stringValue;
@property (readonly, nonatomic) TSWPStorage *richTextOrErrorTextStorageValue;
@property (readonly, nonatomic) BOOL isFormulaSyntaxError;
@property (readonly, nonatomic) BOOL isApplySpareFormatOnly;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cellDiffProperties;
+ (id)formatAndValueFromCell:(id)a0 applySpareFormatOnly:(unsigned int)a1;
+ (id)formatAndValueFromCell:(id)a0 useAllSpareFormats:(BOOL)a1;
+ (id)formatAndValueFromCell:(id)a0 useAllSpareFormats:(BOOL)a1 forceNoContent:(BOOL)a2;
+ (id)formatAndValueFromCell:(id)a0 useAllSpareFormats:(BOOL)a1 suppressApplyingValue:(BOOL)a2;
+ (id)formatAndValueFromRichTextCell:(id)a0 updatingStorageWithBlock:(id /* block */)a1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initFromPropertyCommandMessage:(const struct Message { void /* function */ **x0; struct InternalMetadata { void *x0; } x1; } *)a0 unarchiver:(id)a1;
- (void)saveToPropertyCommandMessage:(struct Message { void /* function */ **x0; struct InternalMetadata { void *x0; } x1; } *)a0 archiver:(id)a1;
- (void)applyToCell:(id)a0;
- (id)cellValueWithLocale:(id)a0;
- (id)copyForApplyingNoContent;
- (id)copyForApplyingNoContentWithSuppressApplyValue:(BOOL)a0;
- (id)copyForNotApplyingValue;
- (id)getCurrentFormat;
- (BOOL)hasStringContentMatchingCell:(id)a0;
- (id)initFromCell:(id)a0 useAllSpareFormats:(BOOL)a1;
- (id)initFromCell:(id)a0 useAllSpareFormats:(BOOL)a1 forceNoContent:(BOOL)a2 suppressApplyValue:(BOOL)a3 applySpareFormatOnly:(unsigned int)a4;
- (id)objectByRemovingPropertiesInMap:(id)a0 addingPropertiesInMap:(id)a1 updateInverseResetPropertyMap:(id)a2 updateInverseSetPropertyMap:(id)a3;
- (id)p_copyStorage:(id)a0;
- (id)p_formatForFormatType:(unsigned char)a0;

@end
