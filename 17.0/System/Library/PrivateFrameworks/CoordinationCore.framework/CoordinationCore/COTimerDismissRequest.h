@class NSString;

@interface COTimerDismissRequest : COMeshRequest

@property (readonly, copy, nonatomic) NSString *identifier;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithTimerIdentifier:(id)a0;

@end
