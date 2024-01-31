@class NSData, NSString;
@protocol SFPseudoRandomFunction;

@interface SFPBKDF2Operation : NSObject <SFKeyDerivingOperation> {
    id _pbkdf2OperationInternal;
}

@property (class, readonly) long long keySource;
@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) id<SFPseudoRandomFunction> pseudoRandomFunction;
@property (nonatomic) long long iterationCount;
@property (copy, nonatomic) NSData *salt;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_randomSalt;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)deriveKeyWithSpecifier:(id)a0 fromKeySource:(id)a1 error:(id *)a2;
- (id)initWithPseudoRandomFunction:(id)a0 iterationCount:(long long)a1 salt:(id)a2;

@end
