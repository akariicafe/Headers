@class NSData;

@interface INGetIntentParameterDefaultValueForwardingActionResponse : INIntentForwardingActionResponse

@property (readonly, nonatomic) NSData *archivedDefaultValue;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithArchivedDefaultValue:(id)a0 error:(id)a1;
- (id)initWithCoder:(id)a0;

@end
