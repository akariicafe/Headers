@interface PHPickerUpdateConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL _didSetEdgesWithoutContentMargins;
@property (readonly, nonatomic) BOOL _didSetSelectionLimit;
@property (readonly, nonatomic) BOOL _isValidConfiguration;
@property (nonatomic) long long selectionLimit;
@property (nonatomic) unsigned long long edgesWithoutContentMargins;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
