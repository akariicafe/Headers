@class NSString;

@interface NTPBWidgetSectionsArticleCountPair : PBCodable <NSCopying> {
    struct { long long *list; unsigned long long count; unsigned long long size; } _countOfArticlesExposedEachSections;
}

@property (readonly, nonatomic) BOOL hasWidgetSectionIdsExposed;
@property (retain, nonatomic) NSString *widgetSectionIdsExposed;
@property (readonly, nonatomic) unsigned long long countOfArticlesExposedEachSectionsCount;
@property (readonly, nonatomic) long long *countOfArticlesExposedEachSections;
@property (readonly, nonatomic) BOOL hasWidgetSectionSubidsExposed;
@property (retain, nonatomic) NSString *widgetSectionSubidsExposed;

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
- (void)addCountOfArticlesExposedEachSection:(long long)a0;
- (void)clearCountOfArticlesExposedEachSections;
- (long long)countOfArticlesExposedEachSectionAtIndex:(unsigned long long)a0;
- (void)setCountOfArticlesExposedEachSections:(long long *)a0 count:(unsigned long long)a1;

@end
