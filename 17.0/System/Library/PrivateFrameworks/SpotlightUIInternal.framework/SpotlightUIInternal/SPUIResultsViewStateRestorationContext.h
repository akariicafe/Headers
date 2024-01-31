@class SPSearchEntity, NSString, NSArray, SearchUICollectionViewRestorationContext;

@interface SPUIResultsViewStateRestorationContext : SearchUICollectionViewRestorationContext <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *searchString;
@property (retain) SPSearchEntity *searchEntity;
@property (retain) NSArray *sections;
@property (retain) SearchUICollectionViewRestorationContext *collectionViewContext;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
