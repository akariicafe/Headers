@class NSString, MXAudioMetadata, NSMutableArray;

@interface MXBeginRequest : PBRequest <NSCopying> {
    struct { unsigned char inputOrigin : 1; unsigned char enablePartialResults : 1; unsigned char isAutoPunctuationEnabled : 1; unsigned char isPromptedConfirmation : 1; unsigned char isPromptedDictation : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasRequestId;
@property (retain, nonatomic) NSString *requestId;
@property (nonatomic) BOOL hasInputOrigin;
@property (nonatomic) int inputOrigin;
@property (readonly, nonatomic) BOOL hasAudioMetadata;
@property (retain, nonatomic) MXAudioMetadata *audioMetadata;
@property (nonatomic) BOOL hasEnablePartialResults;
@property (nonatomic) BOOL enablePartialResults;
@property (nonatomic) BOOL hasIsPromptedDictation;
@property (nonatomic) BOOL isPromptedDictation;
@property (nonatomic) BOOL hasIsPromptedConfirmation;
@property (nonatomic) BOOL isPromptedConfirmation;
@property (readonly, nonatomic) BOOL hasForegroundAppId;
@property (retain, nonatomic) NSString *foregroundAppId;
@property (nonatomic) BOOL hasIsAutoPunctuationEnabled;
@property (nonatomic) BOOL isAutoPunctuationEnabled;
@property (retain, nonatomic) NSMutableArray *inlineLmeItems;

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
- (int)StringAsInputOrigin:(id)a0;
- (void)addInlineLmeItems:(id)a0;
- (void)clearInlineLmeItems;
- (id)inlineLmeItemsAtIndex:(unsigned long long)a0;
- (unsigned long long)inlineLmeItemsCount;
- (id)inputOriginAsString:(int)a0;

@end
