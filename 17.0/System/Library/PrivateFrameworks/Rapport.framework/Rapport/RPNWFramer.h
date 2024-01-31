@interface RPNWFramer : NSObject

+ (void)startConnection:(id)a0;
+ (const char *)controlCodeToString:(int)a0;
+ (void)setupDaemonFramer:(id)a0 receiveHandler:(id /* block */)a1 closeHandler:(id /* block */)a2;
+ (BOOL)writeControlOnFramer:(id)a0 type:(int)a1 error:(unsigned char)a2;
+ (BOOL)writeDataOnFramer:(id)a0 data:(id)a1;
+ (void)writeErrorOnFramer:(id)a0 error:(unsigned char)a1;

@end
