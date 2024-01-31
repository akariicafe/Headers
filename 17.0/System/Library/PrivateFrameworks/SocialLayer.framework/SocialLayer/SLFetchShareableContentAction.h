@class NSString;

@interface SLFetchShareableContentAction : SLShareableContentAction

@property (readonly, copy, nonatomic) NSString *requestedTypeIdentifier;
@property (readonly, nonatomic) long long requestedItemProviderIndex;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithSceneIdentifier:(id)a0 requestedTypeIdentifier:(id)a1 requestedItemProviderIndex:(long long)a2 responseHandler:(id /* block */)a3;

@end
