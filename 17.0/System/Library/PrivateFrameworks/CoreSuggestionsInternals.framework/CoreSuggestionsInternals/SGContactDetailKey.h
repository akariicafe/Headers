@class NSString, SGIdentityKey;

@interface SGContactDetailKey : NSObject <SGEntityKey>

@property (readonly, nonatomic) SGIdentityKey *identityKey;
@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) NSString *value;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isSupportedEntityType:(long long)a0;
+ (id)prefixForForIdentityKey:(id)a0;

- (id)serialize;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithIdentityKey:(id)a0 label:(id)a1 normalizedValue:(id)a2;
- (id)initWithSerialized:(id)a0;
- (BOOL)isEqualToContactDetailKey:(id)a0;

@end
