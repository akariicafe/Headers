@class TPSContextualDuetEventMeta, NSString, NSArray, TPSContextualDuetEventValue, TPSContextualDuetEventSource;

@interface TPSContextualDuetEvent : TPSContextualEvent

@property (copy, nonatomic) NSString *stream;
@property (nonatomic) long long storeType;
@property (copy, nonatomic) NSArray *groupByKeyPaths;
@property (copy, nonatomic) TPSContextualDuetEventMeta *meta;
@property (copy, nonatomic) TPSContextualDuetEventSource *source;
@property (copy, nonatomic) TPSContextualDuetEventValue *value;

+ (BOOL)supportsSecureCoding;
+ (long long)_defaultStoreTypeForStream:(id)a0;

- (id)newStateFromStateDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
