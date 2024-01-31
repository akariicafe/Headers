@class NSString, NSMutableDictionary, NSURL, NSError, NSMutableArray;

@interface PKProvisioningError : NSError <NSSecureCoding> {
    NSMutableDictionary *_userInfo;
    NSMutableArray *_internalDebugDescriptions;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long severity;
@property (retain, nonatomic) NSError *underlyingError;
@property (readonly, nonatomic) NSError *displayableError;
@property (retain, nonatomic) NSString *localizedTitle;
@property (retain, nonatomic) NSString *localizedMessage;
@property (nonatomic) BOOL hasLocalizedTitleAndMessage;
@property (retain, nonatomic) NSString *localizedRecoveryDescription;
@property (retain, nonatomic) NSURL *recoveryUrl;

+ (id)userCancelError;
+ (id)errorWithCommonType:(unsigned long long)a0 severity:(unsigned long long)a1;
+ (id)errorWithSeverity:(unsigned long long)a0;
+ (id)errorWithTitle:(id)a0 message:(id)a1 severity:(unsigned long long)a2;
+ (id)errorWithTitleKey:(id)a0 messageKey:(id)a1 severity:(unsigned long long)a2;
+ (id)errorWithUnderlyingError:(id)a0 defaultSeverity:(unsigned long long)a1;

- (id)init;
- (id)userInfo;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDomain:(id)a0 code:(long long)a1 userInfo:(id)a2;
- (id)initWithCoder:(id)a0;
- (id)_initWithSeverity:(unsigned long long)a0 localizedTitle:(id)a1 localizedMessage:(id)a2;
- (id)_initWithSeverity:(unsigned long long)a0 userInfo:(id)a1;
- (void)addInternalDebugDescription:(id)a0;

@end
