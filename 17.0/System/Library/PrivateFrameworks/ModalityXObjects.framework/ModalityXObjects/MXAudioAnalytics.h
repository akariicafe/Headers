@class NSMutableArray;

@interface MXAudioAnalytics : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *speechRecognitionFeatures;
@property (retain, nonatomic) NSMutableArray *acousticFeatures;

+ (Class)acousticFeaturesType;
+ (Class)speechRecognitionFeaturesType;

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
- (id)acousticFeaturesAtIndex:(unsigned long long)a0;
- (unsigned long long)acousticFeaturesCount;
- (void)addAcousticFeatures:(id)a0;
- (void)addSpeechRecognitionFeatures:(id)a0;
- (void)clearAcousticFeatures;
- (void)clearSpeechRecognitionFeatures;
- (id)speechRecognitionFeaturesAtIndex:(unsigned long long)a0;
- (unsigned long long)speechRecognitionFeaturesCount;

@end
