@class MPPropertySet;

@interface MPModelStoreBrowseSectionBuilder : NSObject {
    struct { unsigned char initialized : 1; unsigned char title : 1; unsigned char type : 1; unsigned char loadAdditionalContentURL : 1; unsigned char previouslyRetrievedNestedResponse : 1; unsigned char uniformContentItemType : 1; unsigned char memberOfChartSet : 1; unsigned char displaysAsGridCellInCarPlay : 1; unsigned char brick : 1; } _requestedBrowseSectionProperties;
}

@property (readonly, nonatomic) MPPropertySet *requestedPropertySet;
@property (readonly, nonatomic) MPPropertySet *requestedPropertySetExcludingInternalOnlyProperties;

+ (id)allSupportedInternalOnlyProperties;
+ (id)allSupportedPropertiesIncludingInternalOnlyProperties:(BOOL)a0;

- (id)initWithRequestedPropertySet:(id)a0;
- (void).cxx_destruct;
- (id)modelObjectWithTitle:(id)a0 loadAdditionalContentURL:(id)a1 uniformContentItemType:(long long)a2 isMemberOfChartSet:(BOOL)a3 isBrick:(BOOL)a4 displaysAsGridCellInCarPlay:(BOOL)a5 previouslyRetrievedNestedResponse:(id)a6 onlyContainsEditorialElements:(BOOL)a7 featuredContentKind:(long long)a8;
- (id)modelObjectWithTitle:(id)a0 loadAdditionalContentURL:(id)a1 uniformContentItemType:(long long)a2 isMemberOfChartSet:(BOOL)a3 isBrick:(BOOL)a4 displaysAsGridCellInCarPlay:(BOOL)a5 previouslyRetrievedNestedResponse:(id)a6 onlyContainsEditorialElements:(BOOL)a7 featuredContentKind:(long long)a8 modelObject:(id)a9;
- (id)modelObjectWithTitle:(id)a0 loadAdditionalContentURL:(id)a1 uniformContentItemType:(long long)a2 isMemberOfChartSet:(BOOL)a3 isBrick:(BOOL)a4 previouslyRetrievedNestedResponse:(id)a5;

@end
