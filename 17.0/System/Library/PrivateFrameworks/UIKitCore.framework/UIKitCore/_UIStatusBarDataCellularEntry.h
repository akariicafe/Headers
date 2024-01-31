@class NSString;

@interface _UIStatusBarDataCellularEntry : _UIStatusBarDataNetworkEntry

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *string;
@property (copy, nonatomic) NSString *crossfadeString;
@property (copy, nonatomic) NSString *badgeString;
@property (nonatomic) BOOL wifiCallingEnabled;
@property (nonatomic) BOOL callForwardingEnabled;
@property (nonatomic) BOOL showsSOSWhenDisabled;
@property (nonatomic) BOOL sosAvailable;
@property (nonatomic) BOOL isBootstrapCellular;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (id)_ui_descriptionBuilder;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
