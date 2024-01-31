@class NSMutableArray;

@interface NTPBTodayWidgetSession : PBCodable <NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _countOfArticlesExposedPerSections;
    struct { unsigned char widgetArticleCount : 1; unsigned char widgetSectionsExposed : 1; } _has;
}

@property (nonatomic) BOOL hasWidgetArticleCount;
@property (nonatomic) int widgetArticleCount;
@property (nonatomic) BOOL hasWidgetSectionsExposed;
@property (nonatomic) int widgetSectionsExposed;
@property (readonly, nonatomic) unsigned long long countOfArticlesExposedPerSectionsCount;
@property (readonly, nonatomic) int *countOfArticlesExposedPerSections;
@property (retain, nonatomic) NSMutableArray *widgetSectionIdsExposeds;
@property (retain, nonatomic) NSMutableArray *countOfArticlesExposedEachSections;

+ (Class)countOfArticlesExposedEachSectionType;
+ (Class)widgetSectionIdsExposedType;

- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)widgetSectionIdsExposedAtIndex:(unsigned long long)a0;
- (void)addCountOfArticlesExposedEachSection:(id)a0;
- (void)addCountOfArticlesExposedPerSection:(int)a0;
- (void)addWidgetSectionIdsExposed:(id)a0;
- (void)clearCountOfArticlesExposedEachSections;
- (void)clearCountOfArticlesExposedPerSections;
- (void)clearWidgetSectionIdsExposeds;
- (id)countOfArticlesExposedEachSectionAtIndex:(unsigned long long)a0;
- (unsigned long long)countOfArticlesExposedEachSectionsCount;
- (int)countOfArticlesExposedPerSectionAtIndex:(unsigned long long)a0;
- (void)setCountOfArticlesExposedPerSections:(int *)a0 count:(unsigned long long)a1;
- (unsigned long long)widgetSectionIdsExposedsCount;

@end
