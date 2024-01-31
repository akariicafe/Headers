@class NSMutableData, NSError;

@interface DESPFLEncryptableBuffer : NSObject {
    NSMutableData *_serializedData;
    unsigned long long _dataLengthVarintOffset;
    unsigned long long _mutableFloatsOffset;
    unsigned long long _ivOffset;
    unsigned long long _sizeOfDataTransport;
    unsigned long long _sizeOfDataTransportOffset;
    NSError *_encryptionError;
    BOOL _encryptionWasAttempted;
    BOOL _transportIsBfloat16;
}

@property (readonly, nonatomic) float *mutableDataNumbers;
@property (readonly, nonatomic) unsigned long long count;

- (void).cxx_destruct;
- (id)encryptedDataWithPublicKey:(id)a0 error:(id *)a1;
- (id)initWithEncryptor:(id)a0 count:(unsigned long long)a1;

@end
