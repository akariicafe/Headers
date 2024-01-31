@class NSString, NSData;

@interface ATXPBHomeScreenWidgetIdentifiable : PBCodable <NSCopying> {
    double _score;
    NSString *_appBundleId;
    NSString *_extensionBundleId;
    NSData *_intent;
    NSString *_predictionSource;
    int _size;
    NSString *_widgetKind;
    NSString *_widgetUniqueId;
    BOOL _onboardingWidget;
    BOOL _suggestedWidget;
    struct { unsigned char score : 1; unsigned char size : 1; unsigned char onboardingWidget : 1; unsigned char suggestedWidget : 1; } _has;
}

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
