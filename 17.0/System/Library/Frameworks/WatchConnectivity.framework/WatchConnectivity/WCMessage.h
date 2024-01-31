@class NSString, NSData;

@interface WCMessage : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *pairingID;
@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSData *data;
@property (readonly, getter=isDictionaryMessage) BOOL dictionaryMessage;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPairingID:(id)a0 identifier:(id)a1 data:(id)a2 dictionaryMessage:(BOOL)a3;

@end
