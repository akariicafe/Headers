@class NSString, NSDictionary, NSData, NSDate, NSURLProtectionSpace;

@interface WBSGeneratedPassword : NSObject {
    NSDictionary *_originalKeychainDictionary;
}

@property (class, readonly, nonatomic) NSString *privateBrowsingSentinel;

@property (readonly, copy, nonatomic) NSData *keychainPersistentReference;
@property (readonly, nonatomic) BOOL wasGeneratedInPrivateBrowsingSession;
@property (readonly, nonatomic) NSDate *generationDate;
@property (readonly, nonatomic) NSURLProtectionSpace *protectionSpace;
@property (readonly, copy, nonatomic) NSString *password;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;

+ (id)keychainDictionaryRepresentationWithPassword:(id)a0;

- (void).cxx_destruct;
- (id)initWithKeychainItemDictionary:(id)a0;
- (id)initWithPassword:(id)a0 protectionSpace:(id)a1 generationDate:(id)a2 wasGeneratedInPrivateBrowsingSession:(BOOL)a3;
- (id)keychainDictionaryRepresentationWithPassword:(id)a0;

@end
