@class UABestAppSuggestionManager, ATXHeuristicDevice;

@interface ATXBestAppDataSource : NSObject {
    ATXHeuristicDevice *_device;
    UABestAppSuggestionManager *_bestAppSuggestionManager;
}

- (void)bestAppSuggestionWithCallback:(id /* block */)a0;
- (id)initWithDevice:(id)a0;
- (void).cxx_destruct;

@end
