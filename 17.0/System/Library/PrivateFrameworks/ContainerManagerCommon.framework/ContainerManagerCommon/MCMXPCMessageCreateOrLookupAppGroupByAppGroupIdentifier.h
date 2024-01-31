@class NSString;

@interface MCMXPCMessageCreateOrLookupAppGroupByAppGroupIdentifier : MCMXPCMessageBase <MCMParametersCreateOrLookupAppGroupByAppGroupIdentifier>

@property (readonly, nonatomic) NSString *appGroupIdentifier;

- (id)initWithXPCObject:(id)a0 context:(id)a1 error:(unsigned long long *)a2;
- (void).cxx_destruct;

@end
