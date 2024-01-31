@class NSString;

@interface FSTaskOption : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) BOOL hasValue;
@property (readonly, retain) NSString *option;
@property (readonly, retain) NSString *optionValue;

+ (id)newOption:(id)a0 value:(id)a1;
+ (id)newOptionWithoutValue:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (Class)classForCoder;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithOption:(id)a0 value:(id)a1 hasValue:(BOOL)a2;

@end
