@interface BRGetPausedFileListUpdater : NSObject <BRGetPausedFileListProtocol, NSSecureCoding> {
    id /* block */ _callback;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCallback:(id /* block */)a0;
- (id)initWithCoder:(id)a0;
- (void)updatePausedFileURL:(id)a0 reply:(id /* block */)a1;

@end
