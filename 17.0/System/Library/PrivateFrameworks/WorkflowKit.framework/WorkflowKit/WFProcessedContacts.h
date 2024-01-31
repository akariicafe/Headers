@class NSArray, WFCommunicationMethod, WFContentAttributionSet;

@interface WFProcessedContacts : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *entries;
@property (readonly, nonatomic) WFContentAttributionSet *attributionSet;
@property (readonly, nonatomic) WFCommunicationMethod *communicationMethod;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithEntries:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)contentCollection;
- (void)getRecipientsWithPermissionRequestor:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithEntries:(id)a0 attributionSet:(id)a1 communicationMethod:(id)a2;

@end
