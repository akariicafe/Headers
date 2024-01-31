@class NSDictionary;

@interface HMIJSONUnarchiver : NSCoder

@property (readonly) id container;
@property (retain) NSDictionary *classMap;

+ (id)objectWithJSONData:(id)a0 classMap:(id)a1;
+ (id)objectWithJSONObject:(id)a0 classMap:(id)a1;
+ (id)objectWithJSONObjectString:(id)a0 classMap:(id)a1;

- (id)initWithJSONObject:(id)a0;
- (id)decodeObjectOfClasses:(id)a0 forKey:(id)a1;
- (BOOL)allowsKeyedCoding;
- (BOOL)decodeBoolForKey:(id)a0;
- (id)decodeObjectOfClass:(Class)a0 forKey:(id)a1;
- (double)decodeDoubleForKey:(id)a0;
- (void).cxx_destruct;
- (long long)decodeInt64ForKey:(id)a0;
- (int)decodeInt32ForKey:(id)a0;
- (id)_objectWithJSONObject:(id)a0 allowedClasses:(id)a1;

@end
