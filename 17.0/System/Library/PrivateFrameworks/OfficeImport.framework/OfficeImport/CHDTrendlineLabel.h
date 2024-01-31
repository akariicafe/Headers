@class EDString, EDResources, OADGraphicProperties, CHDFormula;

@interface CHDTrendlineLabel : NSObject {
    EDResources *mResources;
    CHDFormula *mName;
    unsigned long long mContentFormatId;
    BOOL mContentFormatDerived;
    BOOL mGeneratedText;
    BOOL mAutomaticLabelDeleted;
    OADGraphicProperties *mGraphicProperties;
}

@property (retain, nonatomic) EDString *lastCachedName;

+ (id)trendlineLabelWithResources:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)name;
- (id)initWithResources:(id)a0;
- (unsigned long long)contentFormatId;
- (BOOL)isGeneratedText;
- (id)contentFormat;
- (id)graphicProperties;
- (BOOL)isAutomaticLabelDeleted;
- (BOOL)isContentFormatDerivedFromDataPoints;
- (void)setAutomaticLabelDeleted:(BOOL)a0;
- (void)setContentFormat:(id)a0;
- (void)setContentFormatId:(unsigned long long)a0;
- (void)setGeneratedText:(BOOL)a0;
- (void)setGraphicProperties:(id)a0;
- (void)setIsContentFormatDerivedFromDataPoints:(BOOL)a0;
- (void)setName:(id)a0 chart:(id)a1;

@end
