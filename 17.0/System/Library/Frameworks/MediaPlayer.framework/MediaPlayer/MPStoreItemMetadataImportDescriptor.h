@class NSDictionary, ICUserIdentity;

@interface MPStoreItemMetadataImportDescriptor : NSObject

@property (readonly, nonatomic) NSDictionary *platformDictionary;
@property (readonly, nonatomic) ICUserIdentity *userIdentity;

- (void).cxx_destruct;
- (id)initWithPayload:(id)a0 userIdentity:(id)a1;

@end
