@class NSXPCConnection;

@interface DDScannerObject : NSObject {
    struct __DDScanner { } *_scanner;
    int _type;
    BOOL _hasBasicType;
    long long _jobIdentifier;
    NSXPCConnection *_connectionToService;
}

- (void)dealloc;
- (void).cxx_destruct;

@end
