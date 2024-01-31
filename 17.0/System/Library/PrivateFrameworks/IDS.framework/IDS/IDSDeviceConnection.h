@class NSOutputStream, NSDictionary, _IDSDeviceConnection, NSInputStream;

@interface IDSDeviceConnection : NSObject {
    _IDSDeviceConnection *_internal;
}

@property (readonly, nonatomic) _IDSDeviceConnection *_internal;
@property (readonly, nonatomic) int socket;
@property (readonly, nonatomic) unsigned long long mtu;
@property (readonly, nonatomic) NSInputStream *inputStream;
@property (readonly, nonatomic) NSOutputStream *outputStream;
@property (readonly, nonatomic) NSDictionary *metrics;

- (void)close;
- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)initSocketWithDevice:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2 queue:(id)a3;
- (id)initStreamWithDevice:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2 queue:(id)a3;
- (void)setStreamPairWithInputStream:(id)a0 outputStream:(id)a1;
- (BOOL)updateConnectionWithOptions:(id)a0 error:(id *)a1;

@end
