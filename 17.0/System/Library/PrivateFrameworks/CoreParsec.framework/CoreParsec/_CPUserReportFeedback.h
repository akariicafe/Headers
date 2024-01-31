@class _CPCardSectionForFeedback, NSString, NSArray, _CPSearchResultForFeedback, _CPPunchoutForFeedback, NSData;

@interface _CPUserReportFeedback : PBCodable <_CPProcessableFeedback, _CPUserReportFeedback, NSSecureCoding> {
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
@property (retain, nonatomic) _CPPunchoutForFeedback *userSelection;
@property (retain, nonatomic) _CPCardSectionForFeedback *cardSection;
@property (copy, nonatomic) NSData *uuidBytes;
@property (copy, nonatomic) NSArray *sections;
@property (copy, nonatomic) NSString *uploadedDataIdentifier;
@property (nonatomic) int reportType;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (void)clearSections;
- (id)initWithFacade:(id)a0;
- (id)init;
- (BOOL)readFrom:(id)a0;
- (id)sectionsAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)sectionsCount;
- (void)addSections:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
