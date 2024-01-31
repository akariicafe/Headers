@class NSString, NSArray;

@interface CRCTLDDelegateTablesCoarse : NSObject <CRCTLDDelegate> {
    NSArray *_tableGroups;
    NSArray *_textRegions;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)delegateWithTableGroups:(id)a0 textRegions:(id)a1;

- (void).cxx_destruct;
- (id)groupWithQuad:(id)a0 layoutDirection:(unsigned long long)a1 subregions:(id)a2;
- (long long)groupingConstraintForRegion1:(id)a0 region2:(id)a1;
- (id)initWithTableGroups:(id)a0 textRegions:(id)a1;
- (id)tableForRegion:(id)a0 outCell:(id *)a1;

@end
