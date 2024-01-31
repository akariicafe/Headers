@class NSString;

@interface GCHIDElementSnapshot : NSObject <GCHIDElementAttributes, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) long long usageType;
@property (readonly) long long usageTypeIndex;
@property (readonly) unsigned int elementCookie;
@property (readonly) int type;
@property (readonly) int collectionType;
@property (readonly) long long usage;
@property (readonly) long long usagePage;
@property (readonly) long long min;
@property (readonly) long long max;
@property (readonly) long long scaledMin;
@property (readonly) long long scaledMax;
@property (readonly) long long size;
@property (readonly) long long reportSize;
@property (readonly) unsigned int reportCount;
@property (readonly) long long reportID;
@property (readonly) unsigned char isArray;
@property (readonly) unsigned char isRelative;
@property (readonly) unsigned char isWrapping;
@property (readonly) unsigned char isNonLinear;
@property (readonly) unsigned char hasPreferredState;
@property (readonly) unsigned char hasNullState;
@property (readonly) unsigned int flags;
@property (readonly) long long unit;
@property (readonly) long long unitExponent;
@property (readonly) NSString *name;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)valueForKey:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithHIDElement:(id)a0;
- (id)valueForElementKey:(id)a0;

@end
