@class NSString;

@interface TPSContextualDuetEventSource : TPSSerializableObject

@property (copy, nonatomic) NSString *sourceID;
@property (copy, nonatomic) NSString *bundleID;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
