@class NSString, NSData, MXAudioMetadata, NSMutableArray;

@interface MXBeginDictation : PBCodable <NSCopying> {
    struct { unsigned char inputOrigin : 1; unsigned char keyboardReturnKey : 1; unsigned char keyboardType : 1; unsigned char censorSpeech : 1; unsigned char enablePartialResults : 1; unsigned char isAutoPunctuationEnabled : 1; unsigned char saveRequestAudio : 1; unsigned char speakerIndependentRecognition : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasAudioMetadata;
@property (retain, nonatomic) MXAudioMetadata *audioMetadata;
@property (readonly, nonatomic) BOOL hasRequestId;
@property (retain, nonatomic) NSString *requestId;
@property (readonly, nonatomic) BOOL hasFieldId;
@property (retain, nonatomic) NSString *fieldId;
@property (readonly, nonatomic) BOOL hasFieldLabel;
@property (retain, nonatomic) NSString *fieldLabel;
@property (readonly, nonatomic) BOOL hasApplicationName;
@property (retain, nonatomic) NSString *applicationName;
@property (readonly, nonatomic) BOOL hasApplicationVersion;
@property (retain, nonatomic) NSString *applicationVersion;
@property (nonatomic) BOOL hasKeyboardType;
@property (nonatomic) int keyboardType;
@property (nonatomic) BOOL hasKeyboardReturnKey;
@property (nonatomic) int keyboardReturnKey;
@property (readonly, nonatomic) BOOL hasSelectedText;
@property (retain, nonatomic) NSString *selectedText;
@property (readonly, nonatomic) BOOL hasPrefixText;
@property (retain, nonatomic) NSString *prefixText;
@property (readonly, nonatomic) BOOL hasPostfixText;
@property (retain, nonatomic) NSString *postfixText;
@property (retain, nonatomic) NSMutableArray *inlineLmeItems;
@property (retain, nonatomic) NSMutableArray *languages;
@property (readonly, nonatomic) BOOL hasRegion;
@property (retain, nonatomic) NSString *region;
@property (readonly, nonatomic) BOOL hasActivationToken;
@property (retain, nonatomic) NSData *activationToken;
@property (nonatomic) BOOL hasCensorSpeech;
@property (nonatomic) BOOL censorSpeech;
@property (nonatomic) BOOL hasSpeakerIndependentRecognition;
@property (nonatomic) BOOL speakerIndependentRecognition;
@property (nonatomic) BOOL hasSaveRequestAudio;
@property (nonatomic) BOOL saveRequestAudio;
@property (readonly, nonatomic) BOOL hasKeyboardIdentifier;
@property (retain, nonatomic) NSString *keyboardIdentifier;
@property (nonatomic) BOOL hasEnablePartialResults;
@property (nonatomic) BOOL enablePartialResults;
@property (nonatomic) BOOL hasInputOrigin;
@property (nonatomic) int inputOrigin;
@property (nonatomic) BOOL hasIsAutoPunctuationEnabled;
@property (nonatomic) BOOL isAutoPunctuationEnabled;

+ (Class)languagesType;
+ (Class)inlineLmeItemsType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clearLanguages;
- (unsigned long long)languagesCount;
- (int)StringAsKeyboardType:(id)a0;
- (id)keyboardTypeAsString:(int)a0;
- (void)addLanguages:(id)a0;
- (id)languagesAtIndex:(unsigned long long)a0;
- (int)StringAsInputOrigin:(id)a0;
- (int)StringAsKeyboardReturnKey:(id)a0;
- (void)addInlineLmeItems:(id)a0;
- (void)clearInlineLmeItems;
- (id)inlineLmeItemsAtIndex:(unsigned long long)a0;
- (unsigned long long)inlineLmeItemsCount;
- (id)inputOriginAsString:(int)a0;
- (id)keyboardReturnKeyAsString:(int)a0;

@end
