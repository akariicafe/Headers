@class NSURL, MPModelStoreBrowseResponse;

@interface MPModelStoreBrowseRequest : MPStoreModelRequest

@property (copy, nonatomic) NSURL *loadAdditionalContentURL;
@property (retain, nonatomic) MPModelStoreBrowseResponse *previousRetrievedNestedResponse;
@property (nonatomic) long long domain;
@property (nonatomic) long long additionalContent;
@property (nonatomic) BOOL flattenRadioList;
@property (nonatomic) unsigned long long options;
@property (nonatomic) long long filteringPolicy;
@property (nonatomic) long long subscriptionStatus;
@property (retain, nonatomic) MPModelStoreBrowseResponse *previousResponse;
@property (nonatomic) long long requestEndpoint;

+ (BOOL)supportsSecureCoding;
+ (id)allSupportedItemProperties;
+ (id)allSupportedSectionProperties;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)newOperationWithResponseHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)configureWithParentSection:(id)a0;

@end
