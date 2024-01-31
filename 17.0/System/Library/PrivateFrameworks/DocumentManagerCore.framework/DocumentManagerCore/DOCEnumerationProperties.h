@class NSNumber, NSArray, NSString;

@interface DOCEnumerationProperties : NSObject

@property (copy) NSNumber *maximumNumberOfItems;
@property (copy) NSArray *tagIdentifiers;
@property (copy) NSArray *excludedContentTypes;
@property (copy) NSArray *allowedContentTypes;
@property (copy) NSString *hostIdentifier;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 tags:(id)a1;
- (id)initWithHostIdentifier:(id)a0 maximumNumberOfItems:(long long)a1 allowedContentTypes:(id)a2 excludedContentTypes:(id)a3 tags:(id)a4;

@end
