@class NSString, NSDictionary, NSLocale, AVMutableMetadataItemInternal;
@protocol NSObject, NSCopying;

@interface AVMutableMetadataItem : AVMetadataItem {
    AVMutableMetadataItemInternal *_mutablePriv;
}

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *extendedLanguageTag;
@property (copy, nonatomic) NSLocale *locale;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } time;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } duration;
@property (copy, nonatomic) NSString *dataType;
@property (copy, nonatomic) id<NSObject, NSCopying> value;
@property (copy, nonatomic) NSDictionary *extraAttributes;

+ (id)keyPathsForValuesAffectingIdentifier;
+ (id)metadataItem;

- (id)startDate;
- (id)languageCode;
- (void)setStartDate:(id)a0;
- (id)key;
- (void)setKeySpace:(id)a0;
- (void)setKey:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)keySpace;

@end
