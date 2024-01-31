@class NSData, MRTextEditingAttributes;

@interface MRKeyboardMessage : MRProtocolMessage {
    MRTextEditingAttributes *_attributes;
}

@property (readonly, nonatomic) unsigned long long state;
@property (readonly, nonatomic) NSData *encryptedTextCyphertext;
@property (readonly, nonatomic) MRTextEditingAttributes *attributes;

+ (id)encryptedMessageWithState:(unsigned long long)a0 text:(id)a1 attributes:(id)a2 usingCryptoSession:(id)a3;

- (void).cxx_destruct;
- (unsigned long long)type;
- (id)decryptedTextUsingCryptoSession:(id)a0;
- (id)initWithState:(unsigned long long)a0 encryptedTextCyphertext:(id)a1 attributes:(id)a2;

@end
