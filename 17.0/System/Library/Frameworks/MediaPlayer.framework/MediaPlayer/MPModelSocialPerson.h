@class NSString;

@interface MPModelSocialPerson : MPModelPerson

@property (copy, nonatomic) NSString *uncensoredName;
@property (copy, nonatomic) NSString *handle;
@property (copy, nonatomic) NSString *biography;
@property (nonatomic, getter=isPrivate) BOOL privatePerson;
@property (nonatomic, getter=isVerified) BOOL verified;
@property (nonatomic) long long pendingRequestsCount;
@property (copy, nonatomic) id /* block */ artworkCatalogBlock;

+ (id)__handle_KEY;
+ (id)kind;
+ (void)__MPModelPropertySocialPersonHandle__MAPPING_MISSING__;
+ (id)__pendingRequestsCount_KEY;
+ (void)__MPModelPropertySocialPersonArtwork__MAPPING_MISSING__;
+ (id)__privatePerson_KEY;
+ (void)__MPModelPropertySocialPersonIsVerified__MAPPING_MISSING__;
+ (id)__biography_KEY;
+ (void)__MPModelPropertySocialPersonPendingRequestsCount__MAPPING_MISSING__;
+ (void)__MPModelPropertySocialPersonBiography__MAPPING_MISSING__;
+ (id)__uncensoredName_KEY;
+ (void)__MPModelPropertySocialPersonUncensoredName__MAPPING_MISSING__;
+ (id)__artworkCatalogBlock_KEY;
+ (void)__MPModelPropertySocialPersonIsPrivate__MAPPING_MISSING__;
+ (id)__verified_KEY;
+ (long long)genericObjectType;

- (id)artworkCatalog;

@end
