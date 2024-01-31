@class NSString;

@interface CNHandle : NSObject <CNHandle>

@property (readonly, copy, nonatomic) NSString *stringValue;
@property (readonly, copy, nonatomic) NSString *customIdentifier;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tuHandleTypeMap;
+ (id)geminiHandleForHandle:(id)a0;
+ (long long)geminiHandleTypeForType:(unsigned long long)a0;
+ (id)geminiHandleTypeMap;
+ (unsigned long long)handleTypeForPropertyKey:(id)a0;
+ (id)inPersonHandleForHandle:(id)a0;
+ (long long)inPersonHandleTypeForType:(unsigned long long)a0;
+ (id)inPersonHandleTypeMap;
+ (id)keyTypeMapping;
+ (id)tuHandleForHandle:(id)a0;
+ (long long)tuHandleTypeFromType:(unsigned long long)a0;

- (void).cxx_destruct;
- (id)initWithStringValue:(id)a0 type:(unsigned long long)a1;
- (id)initWithStringValue:(id)a0 customIdentifier:(id)a1 type:(unsigned long long)a2;

@end
