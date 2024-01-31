@class NSString, NWURLSessionReadRequest, NSObject, NSInputStream;
@protocol OS_dispatch_queue;

@interface NWURLSessionRequestBodyStream : NSObject <NSStreamDelegate, NWURLSessionRequestBodyProvider> {
    BOOL _streamIsSetup;
    NSInputStream *_stream;
    unsigned long long _offset;
    long long _bytesSent;
    NSObject<OS_dispatch_queue> *_queue;
    NWURLSessionReadRequest *_readRequest;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long countOfBytesSent;

@end
