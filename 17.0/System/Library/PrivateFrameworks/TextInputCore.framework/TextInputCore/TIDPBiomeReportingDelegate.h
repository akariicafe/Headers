@class NSString, BMSource;

@interface TIDPBiomeReportingDelegate : NSObject <TIDPReportingDelegate> {
    BMSource *_source;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_BMEventWithKeyboardTokenFrequency:(id)a0 withLocale:(id)a1 withTokenType:(id)a2;

@end
