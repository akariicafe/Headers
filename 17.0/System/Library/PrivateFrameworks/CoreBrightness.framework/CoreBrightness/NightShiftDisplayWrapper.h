@class NSString;
@protocol CBContainerProtocol;

@interface NightShiftDisplayWrapper : NSObject <NightShiftSupportProtocol> {
    struct __Display { } *_display;
}

@property (retain) id<CBContainerProtocol> container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)setNightShiftFactorDictionary:(id)a0;
- (void)setPreference:(id)a0 forKey:(id)a1 user:(id)a2;
- (id)copyPreferenceForKey:(id)a0 user:(id)a1;
- (id)initWithDisplay:(struct __Display { } *)a0;

@end
