@class NSArray, NSString;

@interface SAAceListResult : SABaseAceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *result;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)aceListResultWithDictionary:(id)a0 context:(id)a1;
+ (id)aceListResult;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
