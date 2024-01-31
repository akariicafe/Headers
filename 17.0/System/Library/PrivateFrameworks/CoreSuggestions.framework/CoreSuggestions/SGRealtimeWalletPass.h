@class NSString, NSData;

@interface SGRealtimeWalletPass : NSObject <NSSecureCoding, NSCopying, SGRealtimeSuggestion>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int state;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSData *walletPassDictionaryData;
@property (readonly, nonatomic) NSData *walletPassData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initRealtimeWalletPassForState:(int)a0 identifier:(id)a1 walletPassDictionary:(id)a2 walletPassData:(id)a3;
- (BOOL)isEqualToRealtimeWalletPass:(id)a0;
- (id)walletPassDictionary;

@end
