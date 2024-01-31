@class NSData, NSString;

@interface _CPMailResultDetailsForFeedback : PBCodable <_CPMailResultDetailsForFeedback, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int dataSources;
@property (nonatomic) float suggestionScore;
@property (nonatomic) int skgMegadomeSpotlightIndexEntries;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithFacade:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
