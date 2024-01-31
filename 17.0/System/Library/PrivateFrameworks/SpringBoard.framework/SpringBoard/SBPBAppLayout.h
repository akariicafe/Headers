@class NSString, SBPBDisplayItem, SBPBDisplayItemLayoutAttributes, NSMutableArray;

@interface SBPBAppLayout : PBCodable <NSCopying> {
    long long _preferredDisplayOrdinal;
    double _relativeHeight;
    double _relativeWidth;
    int _centerConfiguration;
    SBPBDisplayItem *_centerDisplayItem;
    int _centerDisplayItemRole;
    SBPBDisplayItemLayoutAttributes *_centerLayoutAttributes;
    NSString *_continuousExposeIdentifier;
    NSMutableArray *_displayItemLayoutAttributes;
    NSMutableArray *_displayItemLayoutAttributesForNonPreferredDisplays;
    NSMutableArray *_displayItems;
    int _environment;
    int _layoutConfiguration;
    SBPBDisplayItem *_primaryDisplayItem;
    SBPBDisplayItemLayoutAttributes *_primaryLayoutAttributes;
    SBPBDisplayItem *_secondaryDisplayItem;
    int _secondaryDisplayItemRole;
    SBPBDisplayItemLayoutAttributes *_secondaryLayoutAttributes;
    BOOL _hidden;
    struct { unsigned char centerDisplayItemRole : 1; unsigned char secondaryDisplayItemRole : 1; } _has;
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
