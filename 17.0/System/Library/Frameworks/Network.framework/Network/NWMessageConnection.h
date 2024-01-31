@interface NWMessageConnection : NWConnection

- (void)writeMessage:(id)a0 completionHandler:(id /* block */)a1;
- (void)readMessageWithCompletionHandler:(id /* block */)a0;

@end
