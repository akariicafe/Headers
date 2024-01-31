@class NSString;

@interface SCROBrailleStealthDriver : NSObject <SCROBrailleDriverProtocol> {
    BOOL _isDriverLoaded;
    NSString *_modelIdentifier;
    long long _mainSize;
    long long _statusSize;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)modelIdentifier;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)isInputEnabled;
- (unsigned long long)interfaceVersion;
- (int)brailleInputMode;
- (id)getInputEvents;
- (BOOL)isDriverLoaded;
- (BOOL)isSleeping;
- (int)loadDriverWithIOElement:(id)a0;
- (long long)mainSize;
- (BOOL)postsKeyboardEvents;
- (BOOL)setMainCells:(const char *)a0 length:(long long)a1;
- (BOOL)setStatusCells:(const char *)a0 length:(long long)a1;
- (long long)statusSize;
- (BOOL)supportsBlinkingCursor;
- (BOOL)unloadDriver;

@end
