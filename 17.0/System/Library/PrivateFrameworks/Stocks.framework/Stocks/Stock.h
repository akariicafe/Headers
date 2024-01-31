@class NSString, StockDataSource, NSURL, Exchange, StockChartData;

@interface Stock : NSObject {
    StockChartData *_chartDataArray[9];
}

@property (retain, nonatomic) NSString *symbol;
@property (retain, nonatomic) NSString *companyName;
@property (retain, nonatomic) NSString *shortCompanyName;
@property (retain, nonatomic) Exchange *exchange;
@property (retain, nonatomic) NSString *price;
@property (retain, nonatomic) NSString *change;
@property (retain, nonatomic) NSString *currency;
@property (retain, nonatomic) NSString *symbolType;
@property (retain, nonatomic) NSString *open;
@property (retain, nonatomic) NSString *high;
@property (retain, nonatomic) NSString *low;
@property (retain, nonatomic) NSString *yearHigh;
@property (retain, nonatomic) NSString *yearLow;
@property (retain, nonatomic) NSString *volume;
@property (retain, nonatomic) NSString *averageVolume;
@property (retain, nonatomic) NSString *marketcap;
@property (retain, nonatomic) NSString *peRatio;
@property (retain, nonatomic) NSString *dividendYield;
@property (readonly, nonatomic) unsigned int pricePrecision;
@property (retain, nonatomic) NSURL *infoURL;
@property (retain, nonatomic) StockDataSource *dataSource;
@property (nonatomic) double timeQuoteLastUpdated;
@property (nonatomic) double timeMetadataLastUpdated;
@property (nonatomic, getter=isTransient) BOOL transient;
@property (readonly, nonatomic) NSString *marketStatusDescription;
@property (readonly, nonatomic) NSString *formattedPrice;
@property (readonly, nonatomic) NSString *formattedChange;
@property (readonly, nonatomic) NSString *formattedChangePercent;

+ (id)symbolForURL:(id)a0;
+ (id)BlankValueString;
+ (id)_potentiallyAbsentKeys;
+ (id)listNameOverridesBySymbol;
+ (id)localizedMagnitudeAbbreviatedStringWithString:(id)a0;
+ (id)localizedMagnitudeAbbreviatedStringWithString:(id)a0 fractionDigits:(unsigned int)a1;
+ (id)postfixCharacterForMagnitude:(unsigned int)a0 unitMagnitude:(unsigned int *)a1;
+ (id)urlForStock:(id)a0;
+ (id)urlForStockSymbol:(id)a0;

- (unsigned long long)hash;
- (void)dealloc;
- (double)_updateInterval;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)archiveDictionary;
- (id)listName;
- (BOOL)isMetadataStale;
- (id)listNameWithMaxIndexNameLength:(unsigned long long)a0;
- (BOOL)shouldUseCompanyNameAsListName:(unsigned long long)a0;
- (BOOL)isIndex;
- (void)_updatePricePrecision;
- (BOOL)changeIsNegative;
- (BOOL)changeIsZero;
- (id)chartDataForInterval:(long long)a0;
- (BOOL)doesMetadataNeedUpdate;
- (BOOL)doesQuoteNeedUpdate;
- (id)formattedChangePercent:(BOOL)a0;
- (id)formattedPriceDroppingFractionDigitsIfLengthExceeds:(unsigned long long)a0;
- (BOOL)isQuoteStale;
- (id)listNameOverride;
- (BOOL)marketIsOpen;
- (void)populateFromDictionary:(id)a0;
- (void)setChartData:(id)a0 forInterval:(long long)a1;
- (void)updateMetadataWithDictionary:(id)a0 forTime:(double)a1;
- (void)updateQuoteWithDictionary:(id)a0 forTime:(double)a1;

@end
