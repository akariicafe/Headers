@class NSLocale, NSArray, NSObject;
@protocol FSTaskMessageOps;

@interface FSMessageReceiverDelegate : NSObject <FSTaskOps>

@property (readonly) NSObject<FSTaskMessageOps> *delegate;
@property (readonly) NSLocale *locale;
@property (readonly) NSArray *preferredLanguages;

- (void)logMessage:(id)a0;
- (void).cxx_destruct;
- (void)completed:(id)a0 reply:(id /* block */)a1;
- (void)getLocalizationSetup:(id /* block */)a0;
- (id)initWithDelegate:(id)a0 Locale:(id)a1 preferredLanguages:(id)a2;
- (void)prompt:(id)a0 reply:(id /* block */)a1;
- (void)promptTrueFalse:(id)a0 reply:(id /* block */)a1;

@end
