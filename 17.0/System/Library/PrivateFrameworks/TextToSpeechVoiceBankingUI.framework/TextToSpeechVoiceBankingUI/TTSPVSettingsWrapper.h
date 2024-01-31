@class NSString, UIViewController;

@interface TTSPVSettingsWrapper : NSObject {
    void /* unknown type, empty encoding */ _voiceId;
    void /* unknown type, empty encoding */ _voiceSettings;
    void /* unknown type, empty encoding */ _speechSource;
    void /* unknown type, empty encoding */ subscribers;
    void /* unknown type, empty encoding */ $__lazy_storage_$_rootView;
}

@property (nonatomic, copy) NSString *speechSource;
@property (nonatomic, weak) void /* unknown type, empty encoding */ dataDelegate;
@property (nonatomic, retain) UIViewController *rootView;

- (id)init;
- (void).cxx_destruct;
- (void)reloadView;
- (void)addViewToParent:(id)a0;

@end
