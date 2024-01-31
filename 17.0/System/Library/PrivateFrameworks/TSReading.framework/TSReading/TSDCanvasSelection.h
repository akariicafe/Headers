@class NSSet, TSDDrawableInfo, NSString;
@protocol TSDContainerInfo;

@interface TSDCanvasSelection : TSKSelection <TSDCanvasSelection, NSCopying> {
    NSSet *mInfos;
}

@property (readonly, nonatomic) NSSet *infos;
@property (readonly, nonatomic) unsigned long long infoCount;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) TSDDrawableInfo<TSDContainerInfo> *container;
@property (readonly, nonatomic) NSSet *unlockedInfos;
@property (readonly, nonatomic) unsigned long long unlockedInfoCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)emptySelection;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)containsKindOfClass:(Class)a0;
- (BOOL)containsUnlockedKindOfClass:(Class)a0;
- (id)copyExcludingInfo:(id)a0;
- (id)copyIncludingInfo:(id)a0;
- (id)infosOfClass:(Class)a0;
- (id)initWithInfos:(id)a0;
- (id)initWithInfos:(id)a0 andContainer:(id)a1;

@end
