@class NSString, NSData, NSDate;

@interface CRXFASAKey : NSObject {
    NSString *_privateKeyPEM;
    NSString *_publicKeyPEM;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSData *privateKey;
@property (readonly, nonatomic) NSData *publicKey;
@property (readonly, copy, nonatomic) NSString *privateKeyPEM;
@property (readonly, copy, nonatomic) NSString *publicKeyPEM;
@property (retain, nonatomic) NSDate *creationDate;

+ (id)keyInPEMFormat:(id)a0 isPublic:(BOOL)a1;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithName:(id)a0 privateKey:(id)a1 publicKey:(id)a2 creationDate:(id)a3;

@end
