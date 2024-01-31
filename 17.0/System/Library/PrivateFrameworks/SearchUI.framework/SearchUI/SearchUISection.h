@class NSString, SFCollectionCardSection, SFResultSection;

@interface SearchUISection : NSObject

@property (readonly) SFResultSection *resultSection;
@property (readonly) SFCollectionCardSection *collectionSection;
@property (readonly) NSString *reuseIdentifier;
@property (readonly) NSString *sectionIdentifier;

+ (id)reuseIdentifierForSectionResult;
+ (id)sectionWithResultSection:(id)a0 sectionIdentifier:(id)a1;
+ (id)reuseIdentifierForCollectionSection;
+ (id)sectionWithResultSection:(id)a0 collectionCardSection:(id)a1 sectionIdentifier:(id)a2;

- (id)initWithResultSection:(id)a0 collectionSection:(id)a1 sectionIdentifier:(id)a2;
- (void).cxx_destruct;

@end
