@class NSString, NSArray;
@protocol HKJSONVisitorDelegate;

@interface HKJSONVisitor : NSObject {
    id<HKJSONVisitorDelegate> _delegate;
    id _JSONObject;
}

@property (readonly, copy, nonatomic) NSString *currentKeyPath;
@property (readonly, copy, nonatomic) NSString *lastKeyPathComponent;
@property (readonly, copy, nonatomic) NSArray *allKeyPathComponents;
@property (readonly, nonatomic) long long currentIndex;

+ (id)visitorWithJSONObject:(id)a0 delegate:(id)a1 error:(id *)a2;

- (id)valueForKeyPath:(id)a0;
- (void).cxx_destruct;
- (long long)_traverseJSONObject:(id)a0;
- (long long)_visitArray:(id)a0;
- (long long)_visitDictionary:(id)a0;
- (long long)_visitPrimitive:(id)a0;
- (void)traverseJSONObject;

@end
