@class NSString, NSArray;

@interface GEOResultRefinementMultiSelect : NSObject

@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSArray *multiSelect;
@property (nonatomic) unsigned int maximumNumberOfSelectElements;
@property (nonatomic) long long clauseType;
@property (readonly, nonatomic) BOOL showEqualWidthButtonsOnFilterView;
@property (readonly, nonatomic) NSString *displayNameForMultiSelected;
@property (readonly, nonatomic) NSString *multiSelectIdentifier;

- (void).cxx_destruct;
- (id)convertToGEOPDResultRefinementMultiSelect;
- (id)initWithDisplayName:(id)a0 multiSelect:(id)a1 maximumNumberOfSelectElements:(unsigned int)a2 clauseType:(long long)a3 showEqualWidthButtonsOnFilterView:(BOOL)a4 displayNameForMultiSelected:(id)a5 multiSelectIdentifier:(id)a6;
- (id)initWithResultRefinementMultiSelect:(id)a0;

@end
