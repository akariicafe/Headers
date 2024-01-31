@class NSString;

@interface ATXInstalledSuggestedPage : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long pageType;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *modeUUID;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToATXInstalledSuggestedPage:(id)a0;

@end
