@class NSArray, NSString, NSData, _CPButtonForFeedback;

@interface _CPResultSectionForFeedback : PBCodable <_CPResultSectionForFeedback, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *results;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) double rankingScore;
@property (copy, nonatomic) NSData *fallbackResultSection;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (nonatomic) int knownBundleIdentifier;
@property (nonatomic) BOOL isInitiallyHidden;
@property (nonatomic) unsigned int totalAvailableResults;
@property (retain, nonatomic) _CPButtonForFeedback *titleButtonItem;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichBundleid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithFacade:(id)a0;
- (void)clearResults;
- (void)clearBundleid;
- (void)addResults:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)resultsCount;
- (id)resultsAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
