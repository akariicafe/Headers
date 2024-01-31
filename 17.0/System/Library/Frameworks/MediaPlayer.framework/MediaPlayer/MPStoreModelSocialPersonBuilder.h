@interface MPStoreModelSocialPersonBuilder : MPStoreModelObjectBuilder {
    struct { unsigned char initialized : 1; unsigned char name : 1; unsigned char uncensoredName : 1; unsigned char handle : 1; unsigned char biography : 1; unsigned char artwork : 1; unsigned char isVerified : 1; unsigned char isPrivate : 1; } _requestedSocialPersonProperties;
}

+ (id)allSupportedProperties;

- (id)modelObjectWithStoreItemMetadata:(id)a0 sourceModelObject:(id)a1 userIdentity:(id)a2;

@end
