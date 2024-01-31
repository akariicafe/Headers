@interface VSRecognitionResult : NSObject

+ (void)initialize;
+ (id)recognitionResultWithModelIdentifier:(id)a0 classIdentifiers:(id)a1 values:(id)a2;

- (id)modelIdentifier;
- (id)retain;
- (id)init;
- (unsigned long long)hash;
- (unsigned long long)retainCount;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (oneway void)release;
- (long long)elementCount;
- (id)createHandler;
- (BOOL)getElementClassIdentifier:(id *)a0 value:(id *)a1 atIndex:(long long)a2;
- (id)recognitionAction;
- (id)recognitionResultByReplacingValueForClassIdentifier:(id)a0 withValue:(id)a1;
- (void)setRecognitionAction:(id)a0;
- (id)valueOfFirstElementWithClassIdentifier:(id)a0;

@end
