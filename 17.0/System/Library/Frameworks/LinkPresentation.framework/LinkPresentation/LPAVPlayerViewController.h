@interface LPAVPlayerViewController : AVPlayerViewController {
    id /* block */ _readyForDisplayCallback;
}

- (void)prepareForDisplayWithCompletionHandler:(id /* block */)a0;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;

@end
