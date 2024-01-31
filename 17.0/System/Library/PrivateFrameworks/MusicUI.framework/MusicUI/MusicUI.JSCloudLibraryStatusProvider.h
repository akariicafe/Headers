@class JSValue;

@interface MusicUI.JSCloudLibraryStatusProvider : NSObject <MusicUI.JSCloudLibraryStatusProviderExports> {
    void /* unknown type, empty encoding */ _isCloudLibraryEnabled;
    void /* unknown type, empty encoding */ _isCloudLibraryLoaded;
    void /* unknown type, empty encoding */ cloudLibraryStatusController;
}

@property (nonatomic, retain) JSValue *isCloudLibraryEnabled;
@property (nonatomic, retain) JSValue *isCloudLibraryLoaded;

- (id)init;
- (void).cxx_destruct;

@end
