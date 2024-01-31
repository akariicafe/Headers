@class NPSManager;

@interface NTKCustomMonogramStore : NSObject {
    NPSManager *_npsManager;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (id)_customMonogramFromPrefs;
- (void)_notifyClientsOfChange;
- (void).cxx_destruct;
- (id)customMonogram;
- (void)setCustomMonogram:(id)a0;

@end
