@class NSArray, NSString;

@interface PMLSpotlightReference : NSObject

@property (readonly, nonatomic) NSArray *itemIdentifiers;
@property (readonly, nonatomic) NSString *domainIdentifier;
@property (readonly, nonatomic) NSString *bundleIdentifier;

+ (id)referenceWithBundleId:(id)a0 domainId:(id)a1 itemIds:(id)a2;

- (void).cxx_destruct;
- (id)initWithBundleId:(id)a0 domainId:(id)a1 itemIds:(id)a2;

@end
