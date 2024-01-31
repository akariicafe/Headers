@class NSString;
@protocol REDonatedActionIdentifierProviding;

@interface _REActionKey : NSObject {
    unsigned long long _hash;
}

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) id<REDonatedActionIdentifierProviding> actionType;
@property (readonly, nonatomic) unsigned long long relevanceProvidersHash;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithIdentifier:(id)a0 actionType:(id)a1 relevanceProvidersHash:(unsigned long long)a2;

@end
