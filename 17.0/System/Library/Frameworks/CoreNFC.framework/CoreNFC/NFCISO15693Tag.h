@class NSData, NSString;
@protocol NFCReaderSession;

@interface NFCISO15693Tag : NFCTag <NFCISO15693Tag>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSData *identifier;
@property (readonly, nonatomic) unsigned long long icManufacturerCode;
@property (readonly, copy, nonatomic) NSData *icSerialNumber;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, weak, nonatomic) id<NFCReaderSession> session;
@property (readonly, nonatomic, getter=isAvailable) BOOL available;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)stayQuietWithCompletionHandler:(id /* block */)a0;
- (id)_generateRequestHeader:(unsigned char)a0 flags:(unsigned char)a1;
- (id)_parseResponseErrorWithData:(id)a0;
- (void)_wtxRetryWithCommnand:(id)a0 maxRetry:(long long)a1 completionHandler:(id /* block */)a2;
- (void)authenticateWithRequestFlags:(unsigned char)a0 cryptoSuiteIdentifier:(long long)a1 message:(id)a2 completionHandler:(id /* block */)a3;
- (void)challengeWithRequestFlags:(unsigned char)a0 cryptoSuiteIdentifier:(long long)a1 message:(id)a2 completionHandler:(id /* block */)a3;
- (void)customCommandWithRequestFlag:(unsigned char)a0 customCommandCode:(long long)a1 customRequestParameters:(id)a2 completionHandler:(id /* block */)a3;
- (void)extendedFastReadMultipleBlocksWithRequestFlag:(unsigned char)a0 blockRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 completionHandler:(id /* block */)a2;
- (void)extendedGetMultipleBlockSecurityStatusWithRequestFlag:(unsigned char)a0 blockRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 completionHandler:(id /* block */)a2;
- (void)extendedLockBlockWithRequestFlags:(unsigned char)a0 blockNumber:(long long)a1 completionHandler:(id /* block */)a2;
- (void)extendedReadMultipleBlocksWithRequestFlags:(unsigned char)a0 blockRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 completionHandler:(id /* block */)a2;
- (void)extendedReadSingleBlockWithRequestFlags:(unsigned char)a0 blockNumber:(long long)a1 completionHandler:(id /* block */)a2;
- (void)extendedWriteMultipleBlocksWithRequestFlags:(unsigned char)a0 blockRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 dataBlocks:(id)a2 completionHandler:(id /* block */)a3;
- (void)extendedWriteSingleBlockWithRequestFlags:(unsigned char)a0 blockNumber:(long long)a1 dataBlock:(id)a2 completionHandler:(id /* block */)a3;
- (void)fastReadMultipleBlocksWithRequestFlag:(unsigned char)a0 blockRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 completionHandler:(id /* block */)a2;
- (void)getMultipleBlockSecurityStatusWithRequestFlag:(unsigned char)a0 blockRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 completionHandler:(id /* block */)a2;
- (void)getSystemInfoAndUIDWithRequestFlag:(unsigned char)a0 completionHandler:(id /* block */)a1;
- (void)getSystemInfoWithRequestFlag:(unsigned char)a0 completionHandler:(id /* block */)a1;
- (void)keyUpdateWithRequestFlags:(unsigned char)a0 keyIdentifier:(long long)a1 message:(id)a2 completionHandler:(id /* block */)a3;
- (void)lockAFIWithRequestFlag:(unsigned char)a0 completionHandler:(id /* block */)a1;
- (void)lockBlockWithRequestFlags:(unsigned char)a0 blockNumber:(unsigned char)a1 completionHandler:(id /* block */)a2;
- (void)lockDFSIDWithRequestFlag:(unsigned char)a0 completionHandler:(id /* block */)a1;
- (void)lockDSFIDWithRequestFlag:(unsigned char)a0 completionHandler:(id /* block */)a1;
- (void)readBufferWithRequestFlags:(unsigned char)a0 completionHandler:(id /* block */)a1;
- (void)readMultipleBlocksWithConfiguration:(id)a0 completionHandler:(id /* block */)a1;
- (void)readMultipleBlocksWithRequestFlags:(unsigned char)a0 blockRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 completionHandler:(id /* block */)a2;
- (void)readSingleBlockWithRequestFlags:(unsigned char)a0 blockNumber:(unsigned char)a1 completionHandler:(id /* block */)a2;
- (void)resetToReadyWithRequestFlags:(unsigned char)a0 completionHandler:(id /* block */)a1;
- (void)selectWithRequestFlags:(unsigned char)a0 completionHandler:(id /* block */)a1;
- (void)sendCustomCommandWithConfiguration:(id)a0 completionHandler:(id /* block */)a1;
- (void)sendRequestWithFlag:(long long)a0 commandCode:(long long)a1 data:(id)a2 completionHandler:(id /* block */)a3;
- (void)writeAFIWithRequestFlag:(unsigned char)a0 afi:(unsigned char)a1 completionHandler:(id /* block */)a2;
- (void)writeDSFIDWithRequestFlag:(unsigned char)a0 dsfid:(unsigned char)a1 completionHandler:(id /* block */)a2;
- (void)writeMultipleBlocksWithRequestFlags:(unsigned char)a0 blockRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 dataBlocks:(id)a2 completionHandler:(id /* block */)a3;
- (void)writeSingleBlockWithRequestFlags:(unsigned char)a0 blockNumber:(unsigned char)a1 dataBlock:(id)a2 completionHandler:(id /* block */)a3;

@end
