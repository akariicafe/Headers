@class NSData, NSString;
@protocol NFCReaderSession;

@interface NFCFeliCaTag : NFCTag <NFCFeliCaTag>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain, nonatomic) NSData *currentSystemCode;
@property (readonly, retain, nonatomic) NSData *currentIDm;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, weak, nonatomic) id<NFCReaderSession> session;
@property (readonly, nonatomic, getter=isAvailable) BOOL available;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)resetModeWithCompletionHandler:(id /* block */)a0;
- (void)pollingWithSystemCode:(id)a0 requestCode:(long long)a1 timeSlot:(long long)a2 completionHandler:(id /* block */)a3;
- (void)readWithoutEncryptionWithServiceCodeList:(id)a0 blockList:(id)a1 completionHandler:(id /* block */)a2;
- (void)requestResponseWithCompletionHandler:(id /* block */)a0;
- (void)requestServiceV2WithNodeCodeList:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestServiceWithNodeCodeList:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestSpecificationVersionWithCompletionHandler:(id /* block */)a0;
- (void)requestSystemCodeWithCompletionHandler:(id /* block */)a0;
- (void)sendFeliCaCommandPacket:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeWithoutEncryptionWithServiceCodeList:(id)a0 blockList:(id)a1 blockData:(id)a2 completionHandler:(id /* block */)a3;

@end
