@class NSSet, NSArray;

@interface HKSourceListDataModel : NSObject

@property (readonly, copy, nonatomic) NSSet *allSources;
@property (readonly, copy, nonatomic) NSArray *orderedAppSources;
@property (readonly, copy, nonatomic) NSArray *orderedUninstalledAppSources;
@property (readonly, copy, nonatomic) NSArray *orderedResearchStudySources;
@property (readonly, copy, nonatomic) NSArray *orderedDeviceSources;
@property (readonly, copy, nonatomic) NSArray *orderedClinicalSources;

- (void).cxx_destruct;
- (void)_sortSources:(id)a0;
- (id)initWithSources:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSourceModels:(id)a0;

@end
