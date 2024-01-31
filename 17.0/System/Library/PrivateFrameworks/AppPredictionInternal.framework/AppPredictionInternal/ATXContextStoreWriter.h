@class NSString, _CDContextualKeyPath, _CDClientContext;

@interface ATXContextStoreWriter : NSObject <ATXContextStoreWriterProtocol> {
    _CDClientContext *_context;
    _CDContextualKeyPath *_keyPath;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)setWithObject:(id)a0;
- (id)initWithContext:(id)a0 keyPath:(id)a1;

@end
