@class NSArray, NSError;

@interface CUWriteRequest : NSObject {
    struct iovec { void *iov_base; unsigned long long iov_len; } _iov[16];
    struct iovec { void *x0; unsigned long long x1; } *_iop;
    int _ion;
    unsigned long long _offset;
    unsigned char _messageUUID[16];
}

@property (readonly, nonatomic) struct iovec { void *x0; unsigned long long x1; } *bytesIOArray;
@property (nonatomic) unsigned long long bytesIOCount;
@property (readonly, nonatomic) unsigned long long bytesIOMaxCount;
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) NSArray *dataArray;
@property (nonatomic) BOOL endOfData;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) char *messageUUID;
@property (nonatomic) BOOL hasMessageUUID;

- (id)init;
- (void).cxx_destruct;

@end
