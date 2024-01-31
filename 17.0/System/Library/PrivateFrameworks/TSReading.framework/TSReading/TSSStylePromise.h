@class TSSStyle, NSMutableArray;

@interface TSSStylePromise : NSObject <TSSStyleObject> {
    TSSStyle *_sourceStyle;
    NSMutableArray *_promisees;
}

+ (id)promiseForStyle:(id)a0;

- (void)dealloc;
- (id)initWithStyle:(id)a0;
- (void)addPromisee:(id)a0;
- (void)fulfillWithStyle:(id)a0;

@end
