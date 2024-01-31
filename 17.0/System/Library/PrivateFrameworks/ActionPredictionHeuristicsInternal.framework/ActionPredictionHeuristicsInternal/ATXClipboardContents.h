@class PBServerConnection, ATXHeuristicDevice;

@interface ATXClipboardContents : NSObject {
    ATXHeuristicDevice *_device;
    PBServerConnection *_pasteboardServerConnection;
}

+ (void)_observeLocalPasteboard;

- (void)contentsWithCallback:(id /* block */)a0;
- (id)initWithDevice:(id)a0 pasteboardConnection:(id)a1;
- (id)initWithDevice:(id)a0;
- (void).cxx_destruct;

@end
