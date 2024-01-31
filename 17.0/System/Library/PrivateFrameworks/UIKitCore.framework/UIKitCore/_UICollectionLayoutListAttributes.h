@class UIColor, UIVisualEffect, _UICollectionLayoutListSectionData;

@interface _UICollectionLayoutListAttributes : NSObject <NSCopying> {
    struct { unsigned char stylesFirstItemAsHeader : 1; unsigned char hasBackgroundMaskedCorners : 1; } _flags;
    long long _appearanceStyle;
    unsigned long long _backgroundMaskedCorners;
    _UICollectionLayoutListSectionData *_sectionData;
    UIColor *_sectionBackgroundColor;
    UIColor *_separatorBackgroundColor;
    UIVisualEffect *_separatorVisualEffect;
}

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
