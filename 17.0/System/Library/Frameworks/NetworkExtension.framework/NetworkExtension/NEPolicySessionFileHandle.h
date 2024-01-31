@class NSString;

@interface NEPolicySessionFileHandle : NEFileHandle

@property (readonly) NSString *name;

- (id)initWithPolicySession:(id)a0;
- (id)dictionary;
- (id)initFromDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (unsigned long long)type;
- (id)initWithPolicySession:(id)a0 name:(id)a1;

@end
