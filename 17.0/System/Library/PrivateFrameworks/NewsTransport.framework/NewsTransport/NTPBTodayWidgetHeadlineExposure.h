@class NSString, NTPBAlternateHeadline;

@interface NTPBTodayWidgetHeadlineExposure : PBCodable <NSCopying> {
    struct { unsigned char widgetArticleCount : 1; unsigned char widgetArticleCountInSection : 1; unsigned char widgetArticleRank : 1; unsigned char widgetArticleRankInSection : 1; unsigned char widgetContentType : 1; unsigned char widgetExposureStackLocation : 1; unsigned char widgetSectionDisplayRank : 1; unsigned char widgetType : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasArticleId;
@property (retain, nonatomic) NSString *articleId;
@property (readonly, nonatomic) BOOL hasSourceChannelId;
@property (retain, nonatomic) NSString *sourceChannelId;
@property (readonly, nonatomic) BOOL hasWidgetSectionId;
@property (retain, nonatomic) NSString *widgetSectionId;
@property (nonatomic) BOOL hasWidgetSectionDisplayRank;
@property (nonatomic) int widgetSectionDisplayRank;
@property (nonatomic) BOOL hasWidgetArticleRankInSection;
@property (nonatomic) int widgetArticleRankInSection;
@property (nonatomic) BOOL hasWidgetArticleRank;
@property (nonatomic) int widgetArticleRank;
@property (nonatomic) BOOL hasWidgetArticleCount;
@property (nonatomic) int widgetArticleCount;
@property (nonatomic) BOOL hasWidgetArticleCountInSection;
@property (nonatomic) int widgetArticleCountInSection;
@property (nonatomic) BOOL hasWidgetContentType;
@property (nonatomic) int widgetContentType;
@property (readonly, nonatomic) BOOL hasWebEmbedId;
@property (retain, nonatomic) NSString *webEmbedId;
@property (readonly, nonatomic) BOOL hasAlternateHeadline;
@property (retain, nonatomic) NTPBAlternateHeadline *alternateHeadline;
@property (nonatomic) BOOL hasWidgetExposureStackLocation;
@property (nonatomic) int widgetExposureStackLocation;
@property (nonatomic) BOOL hasWidgetType;
@property (nonatomic) int widgetType;
@property (readonly, nonatomic) BOOL hasWidgetSectionSubid;
@property (retain, nonatomic) NSString *widgetSectionSubid;
@property (readonly, nonatomic) BOOL hasStoryType;
@property (retain, nonatomic) NSString *storyType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (id)widgetExposureStackLocationAsString:(int)a0;
- (void)writeTo:(id)a0;
- (id)widgetContentTypeAsString:(int)a0;
- (id)description;
- (void).cxx_destruct;
- (int)StringAsWidgetContentType:(id)a0;
- (id)widgetTypeAsString:(int)a0;
- (id)dictionaryRepresentation;
- (int)StringAsWidgetExposureStackLocation:(id)a0;
- (BOOL)isEqual:(id)a0;
- (int)StringAsWidgetType:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
