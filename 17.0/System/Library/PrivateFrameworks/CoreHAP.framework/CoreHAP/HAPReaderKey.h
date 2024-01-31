@class NSData, NSString, HAPNFCAccessKeyTypeWrapper;

@interface HAPReaderKey : NSObject <NSCopying, HAPTLVProtocol>

@property (retain, nonatomic) HAPNFCAccessKeyTypeWrapper *type;
@property (retain, nonatomic) NSData *key;
@property (retain, nonatomic) NSData *keyIdentifier;
@property (retain, nonatomic) NSData *readerIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)parsedFromData:(id)a0 error:(id *)a1;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)parseFromData:(id)a0 error:(id *)a1;
- (id)initWithType:(id)a0 key:(id)a1 keyIdentifier:(id)a2 readerIdentifier:(id)a3;
- (id)serializeWithError:(id *)a0;

@end
