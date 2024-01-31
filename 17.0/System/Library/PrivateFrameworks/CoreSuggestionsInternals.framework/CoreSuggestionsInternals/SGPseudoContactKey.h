@class NSString, SGIdentityKey;

@interface SGPseudoContactKey : NSObject <SGEntityKey>

@property (readonly, nonatomic) SGIdentityKey *identityKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isSupportedEntityType:(long long)a0;

- (id)serialize;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithEmail:(id)a0;
- (id)initWithIdentityKey:(id)a0;
- (id)initWithNormalizedEmail:(id)a0;
- (id)initWithSerialized:(id)a0;
- (BOOL)isEqualToPseudoContactKey:(id)a0;

@end
