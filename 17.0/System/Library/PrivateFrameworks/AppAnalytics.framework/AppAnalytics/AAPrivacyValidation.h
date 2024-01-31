@class NSSet;

@interface AAPrivacyValidation : NSObject {
    void /* unknown type, empty encoding */ denylistDescriptors;
}

@property (class, nonatomic, readonly) AAPrivacyValidation *default;

@property (nonatomic, readonly) void /* unknown type, empty encoding */ enabled;
@property (nonatomic, readonly) NSSet *denylistDescriptors;

- (id)init;
- (void).cxx_destruct;
- (id)withDenylistDescriptors:(id)a0;
- (id)withEnabled:(BOOL)a0;

@end
