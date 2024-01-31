@class NSString, NSOutputStream;

@interface NviDataLogger : NSObject <NSStreamDelegate>

@property (retain, nonatomic) NSOutputStream *oStream;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stream:(id)a0 handleEvent:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)endRequest;
- (id)initWithFilePath:(id)a0 appendHdr:(id)a1;
- (void)logData:(id)a0;

@end
