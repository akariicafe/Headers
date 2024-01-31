@class NSString;

@interface CPSystemCoordinatorConfigurationTemplatePreference : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ storage;
    void /* unknown type, empty encoding */ contentExtent;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
