@class NSMutableDictionary, NSDate;

@interface PGMoodGenerationContext : NSObject {
    NSMutableDictionary *_isLongTimeNoSeeByPersonLocalIdentifier;
    NSMutableDictionary *_isLongTimeNoSeeBySocialGroupUUID;
    NSMutableDictionary *_isLongTimeNoSeeByLocationUUID;
    NSDate *_longTimeNoSeePeopleLatestDate;
    NSDate *_longTimeNoSeeLocationLatestDate;
}

- (void).cxx_destruct;
- (id)initWithReferenceDate:(id)a0;
- (BOOL)locationIsLongTimeNoSeeWithLocationNode:(id)a0;
- (BOOL)momentIsLongTimeNoSeeForLocationWithMomentNode:(id)a0;
- (BOOL)momentIsLongTimeNoSeeForPeopleWithMomentNode:(id)a0;
- (BOOL)personIsLongTimeNoSeeWithPersonNode:(id)a0;
- (BOOL)socialGroupIsLongTimeNoSeeWithSocialGroupNode:(id)a0;

@end
