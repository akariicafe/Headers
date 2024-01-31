@class NSString;
@protocol REDonatedActionIdentifierProviding;

@interface _REPerformedActionKey : NSObject

@property (readonly, nonatomic) id<REDonatedActionIdentifierProviding> identifier;
@property (readonly, nonatomic) NSString *bundleIdentifier;

+ (id)keyForBundleIdentifier:(id)a0 identifier:(id)a1;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
