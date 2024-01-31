@class NSArray;

@interface AFSetSettingsResponse : AFSiriResponse {
    NSArray *_settingChanges;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)_initWithRequest:(id)a0 settingChanges:(id)a1;
- (id)settingChanges;

@end
