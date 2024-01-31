@class NSString, NSUUID;

@interface PBFPosterPair : NSObject {
    void /* unknown type, empty encoding */ id;
    void /* unknown type, empty encoding */ localizedTitle;
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ configuredProperties;
    void /* unknown type, empty encoding */ associatedConfiguration;
    void /* unknown type, empty encoding */ provisionalHomeScreenConfiguration;
    void /* unknown type, empty encoding */ observers;
    void /* unknown type, empty encoding */ ignoreNotifyingForProvisionalHomeScreenConfigurationChange;
}

@property (nonatomic, copy) NSString *localizedTitle;
@property (nonatomic, readonly) NSUUID *configurationUUID;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 associatedConfiguration:(id)a1;

@end
