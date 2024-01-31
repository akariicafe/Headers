@class NSData;

@interface SISchemaCardSectionKeyboardInvocationContext : SISchemaInstrumentationMessage {
    struct { unsigned char keyboardPresented : 1; unsigned char keyboardLocale : 1; unsigned char existingText : 1; } _has;
}

@property (nonatomic) BOOL keyboardPresented;
@property (nonatomic) BOOL hasKeyboardPresented;
@property (nonatomic) int keyboardLocale;
@property (nonatomic) BOOL hasKeyboardLocale;
@property (nonatomic) BOOL existingText;
@property (nonatomic) BOOL hasExistingText;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteExistingText;
- (void)deleteKeyboardLocale;
- (void)deleteKeyboardPresented;

@end
