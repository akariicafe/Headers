@class NSString, NSArray, _CPSearchResultForFeedback, NSData;

@interface _CPResultRankingFeedback : PBCodable <_CPProcessableFeedback, _CPResultRankingFeedback, NSSecureCoding> {
    unsigned long long _timestamp;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long timestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long timestamp;
@property (retain, nonatomic) _CPSearchResultForFeedback *result;
@property (copy, nonatomic) NSArray *hiddenResults;
@property (copy, nonatomic) NSArray *duplicateResults;
@property (nonatomic) unsigned int localResultPosition;
@property (nonatomic) double personalizationScore;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithFacade:(id)a0;
- (id)init;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addHiddenResults:(id)a0;
- (void).cxx_destruct;
- (id)duplicateResultsAtIndex:(unsigned long long)a0;
- (void)clearHiddenResults;
- (BOOL)isEqual:(id)a0;
- (void)clearDuplicateResults;
- (id)hiddenResultsAtIndex:(unsigned long long)a0;
- (void)addDuplicateResults:(id)a0;
- (unsigned long long)duplicateResultsCount;
- (unsigned long long)hiddenResultsCount;

@end
