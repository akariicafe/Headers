@class NSString, NSByteCountFormatter, MUCircleProgressObservingView;
@protocol MUOfflineMapProvider;

@interface MUDownloadOfflineActionRowItemViewModel : MUActionRowItemViewModel <MUOfflineMapProviderObserver> {
    NSByteCountFormatter *_byteCountFormatter;
    MUCircleProgressObservingView *_progressView;
}

@property (readonly, nonatomic) unsigned long long actionItemType;
@property (weak, nonatomic) id<MUOfflineMapProvider> offlineMapProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)progressView;
- (void)dealloc;
- (id)titleText;
- (id)byteCountFormatter;
- (id)accessibilityIdentifier;
- (id)symbolName;
- (id)accessoryView;
- (BOOL)isEnabled;
- (void).cxx_destruct;
- (id)initWithOfflineMapProvider:(id)a0;
- (void)offlineMapProviderUpdated:(id)a0;

@end
