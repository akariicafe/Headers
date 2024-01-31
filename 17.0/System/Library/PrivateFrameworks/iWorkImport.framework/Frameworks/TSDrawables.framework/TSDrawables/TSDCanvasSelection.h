@class TSDInfoCollectionSelectionHelper, NSSet, NSString;

@interface TSDCanvasSelection : TSKSelection <TSDCanvasSelection>

@property (retain, nonatomic) TSDInfoCollectionSelectionHelper *selectionHelper;
@property (readonly, nonatomic) NSSet *modelInfos;
@property (readonly, nonatomic) NSString *subclassDescription;
@property (readonly, nonatomic) NSSet *infos;
@property (readonly, nonatomic) unsigned long long infoCount;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) NSSet *infosWithNonInteractiveInfos;
@property (readonly, nonatomic) NSSet *nonInteractiveInfos;
@property (readonly, nonatomic) NSSet *unlockedInfos;
@property (readonly, nonatomic) unsigned long long unlockedInfoCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)archivedSelectionClass;
+ (id)emptySelection;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)containsKindOfClass:(Class)a0;
- (BOOL)containsUnlockedKindOfClass:(Class)a0;
- (id)infosOfClass:(Class)a0;
- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1;
- (id)initWithInfos:(id)a0;
- (id)UUIDDescription;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (BOOL)providesActivityDescription;
- (id)initWithInteractiveInfos:(id)a0 nonInteractiveInfos:(id)a1;

@end
