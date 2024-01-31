@interface Safety.EmergencySOSPhoneSpecifierDataSource : NSObject <CoreTelephonyClientSubscriberDelegate> {
    void /* unknown type, empty encoding */ eventHandler;
    void /* unknown type, empty encoding */ presentationContext;
    void /* unknown type, empty encoding */ isSettingUpdatedLocally;
    void /* unknown type, empty encoding */ isAutoCallForceDisabled;
    void /* unknown type, empty encoding */ coreTelephonyClient;
    void /* unknown type, empty encoding */ callWithPressesSpecifiers;
    void /* unknown type, empty encoding */ callQuietlySpecifiers;
    void /* unknown type, empty encoding */ groupPressSideButtonSpecifier;
    void /* unknown type, empty encoding */ pressSideButtonThreeClicksSpecifier;
    void /* unknown type, empty encoding */ pressSideButtonFiveClicksSpecifier;
    void /* unknown type, empty encoding */ currentSOSTriggerMechanism;
}

- (void)simStatusDidChange:(id)a0 status:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)didSelectPressSideButtonFiveTimes;
- (void)didSelectPressSideButtonThreeTimes;
- (id)getCallQuietlyValue;
- (id)getCallWithHoldValue;
- (id)getCallWithPressesValue;
- (void)setCallQuietlyWithValue:(id)a0;
- (void)setCallWithHoldWithValue:(id)a0;
- (void)setCallWithPressesWithValue:(id)a0;

@end
