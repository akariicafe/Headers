@class NSString;

@interface SAAceObjectReference : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *referenceIdentifier;
@property (copy, nonatomic) NSString *referenceType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)aceObjectReferenceWithDictionary:(id)a0 context:(id)a1;
+ (id)aceObjectReference;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
