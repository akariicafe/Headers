@class NSString;

@interface NSFileWatcherObservations : NSObject {
    BOOL _attributesChanged;
    BOOL _contentsChanged;
    BOOL _deleted;
    BOOL _moved;
    NSString *_lastObservedPath;
    BOOL _didResetPath;
    NSString *_path;
}

- (id)initWithPath:(id)a0;
- (void)addDeletion;
- (void)dealloc;
- (void)addContentsChange;
- (id)description;
- (void)addAttributeChange;
- (void)addDetectedMoveToPath:(id)a0;
- (void)notifyObserver:(id /* block */)a0;
- (void)addAnnouncedMoveToPath:(id)a0;

@end
