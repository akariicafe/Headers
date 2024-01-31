@class UIColor, NSString, NSData, PKInkBehavior;

@interface PKInk : NSObject <NSSecureCoding, NSCopying> {
    struct shared_ptr<PKProtobufUnknownFields> { struct PKProtobufUnknownFields *__ptr_; struct __shared_weak_count *__cntrl_; } _unknownFields;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *rawValue;
@property (nonatomic) void /* unknown type, empty encoding */ _sixChannelAddColor;
@property (nonatomic) void /* unknown type, empty encoding */ _sixChannelMultiplyColor;
@property (retain, nonatomic) PKInkBehavior *behavior;
@property (readonly, nonatomic) unsigned long long version;
@property (readonly, nonatomic) long long inkFormatVersion;
@property (readonly, nonatomic) NSString *variant;
@property (readonly, nonatomic) double _weight;
@property (readonly, nonatomic) BOOL _isStrokeGeneratingInk;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) double weight;
@property (readonly, nonatomic) NSString *inkType;
@property (readonly, nonatomic) UIColor *color;
@property (readonly, nonatomic) long long requiredContentVersion;

+ (id)inkWithIdentifier:(id)a0 color:(id)a1 weight:(double)a2;
+ (void)_clearCachedInks;
+ (id)colorForLassoStroke;
+ (long long)currentInkVersionForInkIdentifier:(id)a0;
+ (double)defaultOpacityForIdentifier:(id)a0;
+ (double)defaultWeightForIdentifier:(id)a0;
+ (id)identifierForCommandType:(unsigned int)a0 wantsObjectErase:(BOOL)a1;
+ (id)identifierForInkType:(id)a0;
+ (id)inkFromDictionary:(id)a0 color:(id)a1 identifier:(id)a2;
+ (id)inkFromInk:(id)a0 color:(id)a1;
+ (id)inkFromInk:(id)a0 weight:(double)a1;
+ (id)inkFromInk:(id)a0 withBehavior:(id)a1;
+ (id)inkWithIdentifier:(id)a0 color:(id)a1;
+ (id)inkWithIdentifier:(id)a0 color:(id)a1 variant:(id)a2;
+ (id)inkWithIdentifier:(id)a0 color:(id)a1 version:(unsigned long long)a2 variant:(id)a3;
+ (id)inkWithIdentifier:(id)a0 properties:(id)a1;
+ (id)inkWithIdentifier:(id)a0 properties:(id)a1 inkVersion:(long long)a2;
+ (id)inkWithType:(id)a0 color:(id)a1 weight:(double)a2;

- (void)setWeight:(double)a0;
- (id)init;
- (unsigned long long)hash;
- (id)properties;
- (void)encodeWithCoder:(id)a0;
- (id).cxx_construct;
- (id)description;
- (void).cxx_destruct;
- (id)initWithArchive:(const void *)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRawValue:(id)a0;
- (void)saveToArchive:(void *)a0;
- (void /* unknown type, empty encoding */)_defaultSixChannelMultiplyColor;
- (void)_addTestDataToUnknownFields;
- (id)_copyWithVariant:(id)a0;
- (id)_dataInUnknownFields;
- (void /* unknown type, empty encoding */)_defaultSixChannelAddColor;
- (BOOL)_isCrayonInk;
- (BOOL)_isEraserInk;
- (BOOL)_isFountainPenInk;
- (BOOL)_isHandwritingInk;
- (BOOL)_isLassoInk;
- (BOOL)_isMarkerInk;
- (BOOL)_isMonolineInk;
- (BOOL)_isPencilInk;
- (BOOL)_isWatercolorInk;
- (long long)_numPaintFramebuffers;
- (void)_setupCustomizedSixChannelColors;
- (void)_setupDefaultSixChannelAddAndMultiplyColors;
- (BOOL)_shouldSaveSixChannelAddColor;
- (BOOL)_shouldSaveSixChannelMultiplyColor;
- (id)_sixChannelVersion;
- (BOOL)_supportsCombiningStrokes;
- (unsigned long long)hashValueForFloat:(double)a0;
- (id)identifierForArchiving;
- (id)initWithBehavior:(id)a0 color:(id)a1 version:(unsigned long long)a2 variant:(id)a3 weight:(double)a4;
- (id)initWithIdentifier:(id)a0 color:(id)a1 version:(unsigned long long)a2 variant:(id)a3;
- (id)initWithIdentifier:(id)a0 color:(id)a1 version:(unsigned long long)a2 variant:(id)a3 weight:(double)a4;
- (id)initWithIdentifier:(id)a0 color:(id)a1 version:(unsigned long long)a2 variant:(id)a3 weight:(double)a4 behavior:(id)a5;
- (id)initWithInkType:(id)a0 color:(id)a1;
- (id)initWithUncheckedIdentifier:(id)a0 color:(id)a1 version:(unsigned long long)a2 variant:(id)a3 weight:(double)a4;
- (id)initWithV1Archive:(const void *)a0 serializationVersion:(unsigned long long)a1;
- (BOOL)isEqualInk:(id)a0;
- (BOOL)isEqualUnweightedInk:(id)a0;
- (void)saveToV1Archive:(void *)a0;
- (id)variantForArchiving;

@end
