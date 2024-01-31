@interface BCBrtMonitor : NSObject {
    id /* block */ _cancel;
}

- (id)init;
- (void)dealloc;
- (void)setCancelHandler:(id /* block */)a0;
- (void)cancel;

@end
