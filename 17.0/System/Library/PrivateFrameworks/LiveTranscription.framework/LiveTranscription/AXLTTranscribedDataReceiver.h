@interface AXLTTranscribedDataReceiver : NSObject

@property (readonly, nonatomic) long long requestType;
@property (readonly, nonatomic) int targetPID;
@property (readonly) id /* block */ callbackBlock;
@property (readonly) id /* block */ audioInfoBlock;

- (void).cxx_destruct;
- (id)initWithRequestType:(long long)a0 targetPID:(int)a1 handler:(id /* block */)a2 audioInfoBlock:(id /* block */)a3;

@end
