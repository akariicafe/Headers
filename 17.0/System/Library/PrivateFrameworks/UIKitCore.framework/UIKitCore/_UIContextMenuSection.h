@class NSString, NSUUID;

@interface _UIContextMenuSection : NSObject {
    NSUUID *_identifier;
    BOOL _overridesCellSizeForLargeText;
}

@property (nonatomic) BOOL isRoot;
@property (nonatomic) BOOL wantsSectionSeparator;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) long long preferredCellSize;
@property (readonly, nonatomic) long long layout;
@property (readonly, nonatomic) unsigned long long preferredActionLineLimit;
@property (readonly, nonatomic) BOOL isMultiColorPalette;

+ (id)sectionWithMenu:(id)a0;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (long long)cellSizeGivenTraits:(id)a0;

@end
