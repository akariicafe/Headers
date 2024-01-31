@class NSString;
@protocol P256PrivateKeyProtocol;

@interface FullKey : NSObject

@property (retain) NSString *keychainTag;
@property (readonly) id<P256PrivateKeyProtocol> key;
@property (readonly) int keyStore;

+ (id)generateNewKeyWithAccess:(id)a0 error:(id *)a1;
+ (id)generateNewKeyWithAccess:(id)a0 forceNoSEP:(BOOL)a1 error:(id *)a2;

- (id)initWithKey:(id)a0 error:(id *)a1;
- (id)description;
- (void).cxx_destruct;
- (id)keyIdentifier;
- (id)initWithCTKTokenOID:(id)a0 error:(id *)a1;
- (id)initWithKeychainTag:(id)a0 error:(id *)a1;
- (id)initWithProtobufferData:(id)a0 error:(id *)a1;
- (id)protobuffer;

@end
