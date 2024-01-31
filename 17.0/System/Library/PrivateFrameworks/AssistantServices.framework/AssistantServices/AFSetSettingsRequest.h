@class NSArray;

@interface AFSetSettingsRequest : AFSiriRequest

@property (copy, nonatomic, setter=_setSettings:) NSArray *settings;
@property (nonatomic, setter=_setApplyChanges:) BOOL applyChanges;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)createResponse;
- (id)createResponseWithSettingChanges:(id)a0;

@end
