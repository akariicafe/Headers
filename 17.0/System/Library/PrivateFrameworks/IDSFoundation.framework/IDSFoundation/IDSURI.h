@class NSString, IDSPushToken;

@interface IDSURI : NSObject <NSCopying, NSSecureCoding, IDSDestinationProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *prefixedURI;
@property (retain, nonatomic) NSString *serviceLoggingHint;
@property (readonly, nonatomic) NSString *unprefixedURI;
@property (readonly, nonatomic) long long IDSIDType;
@property (readonly, nonatomic) long long FZIDType;
@property (readonly, nonatomic) BOOL isTemporaryURI;
@property (readonly, nonatomic) BOOL isTokenURI;
@property (readonly, nonatomic) IDSURI *tokenFreeURI;
@property (readonly, nonatomic) IDSPushToken *pushToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)URIWithPrefixedURI:(id)a0;
+ (id)URIWithUnprefixedURI:(id)a0 withServiceLoggingHint:(id)a1;
+ (id)URIWithPrefixedURI:(id)a0 withServiceLoggingHint:(id)a1;
+ (id)URIWithUnprefixedURI:(id)a0;

- (id)destinationURIs;
- (id)URIByAddingOptionalPushToken:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithUnprefixedURI:(id)a0;
- (long long)compare:(id)a0;
- (id)URIByAddingPushToken:(id)a0;
- (id)initWithPrefixedURI:(id)a0;
- (void).cxx_destruct;
- (id)initWithUnprefixedURI:(id)a0 withServiceLoggingHint:(id)a1;
- (id)initWithPrefixedURI:(id)a0 withServiceLoggingHint:(id)a1;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToURI:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
