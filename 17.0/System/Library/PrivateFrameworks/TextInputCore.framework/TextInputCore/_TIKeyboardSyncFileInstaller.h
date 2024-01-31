@class _KSFileEntry;

@interface _TIKeyboardSyncFileInstaller : NSObject {
    _KSFileEntry *_entry;
}

- (BOOL)valid;
- (void)dealloc;
- (void)execute;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithEntry:(id)a0;

@end
