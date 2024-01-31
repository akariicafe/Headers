@class NSString;

@interface BlastDoorSMSFilteringSettingsMessage : NSObject {
    void /* unknown type, empty encoding */ sMSFilteringSettingsMessage;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *filterExtensionName;
@property (nonatomic, readonly) unsigned long long smsFilterCapabilitiesOptions;

- (id)init;
- (void).cxx_destruct;

@end
