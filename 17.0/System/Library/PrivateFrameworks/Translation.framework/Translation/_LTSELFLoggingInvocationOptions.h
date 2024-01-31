@class _LTSELFLoggingTranslateAppContext;

@interface _LTSELFLoggingInvocationOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long task;
@property (readonly, nonatomic) long long inputMode;
@property (readonly, nonatomic) long long invocationType;
@property (readonly, retain, nonatomic) _LTSELFLoggingTranslateAppContext *translateAppContext;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithTask:(long long)a0 inputMode:(long long)a1 invocationType:(long long)a2 translateAppContext:(id)a3;

@end
