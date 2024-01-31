@class NSString;

@interface COIDSMessageFactory : NSObject

@property (readonly, nonatomic) NSString *meshName;
@property (readonly, nonatomic) NSString *idsIdentifier;

- (id)init;
- (void).cxx_destruct;
- (id)encodeError:(id)a0;
- (id)encodeResponse:(id)a0;
- (id)decodeDictionary:(id)a0 error:(id *)a1;
- (id)encodeRequest:(id)a0 withIDSIdentifier:(BOOL)a1;

@end
