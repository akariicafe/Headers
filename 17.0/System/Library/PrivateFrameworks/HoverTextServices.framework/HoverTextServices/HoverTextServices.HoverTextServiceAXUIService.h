@interface HoverTextServices.HoverTextServiceAXUIService : NSObject <AXUIClientDelegate> {
    void /* unknown type, empty encoding */ hoverTextEnabled;
    void /* unknown type, empty encoding */ _client;
}

- (id)init;
- (void)dealloc;
- (void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)a0;
- (void).cxx_destruct;
- (id)userInterfaceClient:(id)a0 accessQueueForProcessingMessageWithIdentifier:(long long)a1;

@end
