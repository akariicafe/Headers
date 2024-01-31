@class NSString, NSData, NSDate;

@interface CMLUseCaseStatus : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *useCase;
@property (readonly, copy, nonatomic) NSData *serializedDynamicConfig;
@property (readonly, copy, nonatomic) NSDate *lastUsed;
@property (readonly, copy, nonatomic) NSDate *keyGenerationTime;
@property (readonly, copy, nonatomic) NSDate *keyExpirationTime;
@property (readonly, nonatomic) unsigned long long status;

+ (id)createConnection;
+ (void)requestStatusForUseCases:(id)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;
+ (void)requestStatusForUseCases:(id)a0 options:(unsigned long long)a1 dispatchQueue:(id)a2 completionHandler:(id /* block */)a3;
+ (id)statusForUseCases:(id)a0 options:(unsigned long long)a1 error:(id *)a2;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithUseCase:(id)a0 serializedDynamicConfig:(id)a1 lastUsed:(id)a2 keyGenerationTime:(id)a3 keyExpirationTime:(id)a4 status:(unsigned long long)a5;

@end
