@class NSString, NSDate;

@interface TPSSavedTipEntry : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ savedDate;
    void /* unknown type, empty encoding */ lastUsedVersion;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSDate *savedDate;
@property (nonatomic, copy) NSString *lastUsedVersion;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithSavedDate:(id)a0 lastUsedVersion:(id)a1;

@end
