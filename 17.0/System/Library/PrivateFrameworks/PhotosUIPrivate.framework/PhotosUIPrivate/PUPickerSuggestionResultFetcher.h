@protocol PUPickerSuggestion;

@interface PUPickerSuggestionResultFetcher : NSObject <PHPhotoLibraryChangeObserver> {
    void /* unknown type, empty encoding */ photoLibrary;
    void /* unknown type, empty encoding */ updateHandler;
    void /* unknown type, empty encoding */ workQueue;
    void /* unknown type, empty encoding */ workQueue_currentSuggestion;
    void /* unknown type, empty encoding */ workQueue_result;
    void /* unknown type, empty encoding */ workQueue_wallpaperSuggestionCache;
}

@property (nonatomic, retain) id<PUPickerSuggestion> currentSuggestion;

- (id)init;
- (void)photoLibraryDidChange:(id)a0;
- (void).cxx_destruct;
- (id)initWithPhotoLibrary:(id)a0 updateHandler:(id /* block */)a1;

@end
