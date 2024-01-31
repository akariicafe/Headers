@class NSString;

@interface CPSystemCoordinatorConfiguration : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ spatialTemplatePreference;
    void /* unknown type, empty encoding */ supportsGroupImmersiveSpace;
    void /* unknown type, empty encoding */ isObservingGroupImmersionStyle;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
