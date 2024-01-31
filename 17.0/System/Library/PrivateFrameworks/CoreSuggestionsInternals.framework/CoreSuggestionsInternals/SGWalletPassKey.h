@class NSString;

@interface SGWalletPassKey : NSObject <SGEntityKey>

@property (readonly, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isSupportedEntityType:(long long)a0;

- (id)initWithIdentifier:(id)a0;
- (id)serialize;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSerialized:(id)a0;
- (BOOL)isEqualToWalletPassKey:(id)a0;

@end
