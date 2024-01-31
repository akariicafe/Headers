@class NSString, PSSpecifier, UIImage, NSObject;
@protocol STStorageTipUIDelegate;

@interface STStorageTip : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _specLock;
}

@property (weak) NSObject<STStorageTipUIDelegate> *uiDelegate;
@property (retain) NSString *identifier;
@property (retain) PSSpecifier *specifier;
@property (readonly) PSSpecifier *infoSpecifier;
@property (retain) NSString *title;
@property (retain) NSString *infoText;
@property (retain) UIImage *icon;
@property long long size;
@property (retain) NSString *representedApp;

- (void)reload;
- (id)init;
- (void)setProperty:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)propertyForKey:(id)a0;
- (void)_reload:(id)a0;

@end
