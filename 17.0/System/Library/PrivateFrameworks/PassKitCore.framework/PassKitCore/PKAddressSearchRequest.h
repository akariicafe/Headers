@class NSString, NSPredicate, NSArray;

@interface PKAddressSearchRequest : NSObject

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *fragment;
@property (retain, nonatomic) NSPredicate *predicate;
@property (retain, nonatomic) NSArray *keysToFetch;
@property (copy, nonatomic) id /* block */ contactFilter;
@property (retain, nonatomic) NSString *outputKey;

- (id)allKeys;
- (id)initWithEmailAddress:(id)a0;
- (void).cxx_destruct;
- (id)initWithPostalAddress:(id)a0;
- (id)initWithPhoneNumber:(id)a0;
- (id /* block */)_contactPropertyFilterForKey:(id)a0 propertyName:(id)a1;
- (id)contactKeys;
- (id)initWithFullText:(id)a0;
- (id)initWithNameComponents:(id)a0;
- (id)postalAddressKeys;

@end
