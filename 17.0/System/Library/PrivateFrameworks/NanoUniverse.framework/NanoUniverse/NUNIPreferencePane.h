@class _TtC12NanoUniverse14PreferencePane;
@protocol NUNIPreferencePaneDelegate;

@interface NUNIPreferencePane : NSObject <NanoUniverse.PreferencePaneDelegate> {
    _TtC12NanoUniverse14PreferencePane *_preference;
}

@property (weak, nonatomic) id<NUNIPreferencePaneDelegate> delegate;

- (void).cxx_destruct;
- (id)initWithPreferencePane:(id)a0;
- (id)initWithSliders:(id)a0 toggles:(id)a1 pickerOptions:(id)a2 pickerSelections:(id)a3;
- (void)preferencePaneDidChangeWithPreference:(id)a0;

@end
