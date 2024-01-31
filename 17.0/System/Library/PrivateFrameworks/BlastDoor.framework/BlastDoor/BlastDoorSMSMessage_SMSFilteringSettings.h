@class NSString;

@interface BlastDoorSMSMessage_SMSFilteringSettings : NSObject {
    void /* unknown type, empty encoding */ sMSMessage_SMSFilteringSettings;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *filterExtensionName;
@property (nonatomic, readonly) unsigned long long smsFilterCapabilitiesOptions;

- (id)init;
- (void).cxx_destruct;

@end
