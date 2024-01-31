@class NSSet;

@interface TSDGroupSelection : TSDDrawableSelection

@property (nonatomic) BOOL hasSelectedInfosInNonGroupContainer;
@property (readonly, nonatomic) NSSet *containerGroups;
@property (readonly, nonatomic) BOOL isCrossContainerSelection;

+ (Class)archivedSelectionClass;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)subclassDescription;
- (id)initWithContainerGroups:(id)a0 hasSelectedInfosInNonGroupContainer:(BOOL)a1;
- (id)initWithGroupInfo:(id)a0;

@end
