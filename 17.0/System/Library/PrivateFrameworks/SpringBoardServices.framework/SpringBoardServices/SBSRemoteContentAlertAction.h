@class NSString;

@interface SBSRemoteContentAlertAction : NSObject <NSSecureCoding> {
    NSString *_title;
    long long _style;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) long long style;
@property (nonatomic, getter=isEnabled) BOOL enabled;

- (unsigned long long)hash;
- (id)initWithTitle:(id)a0 style:(long long)a1;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
