@class NSError, NSArray, NSMutableArray;

@interface _NSKeyedUnarchiverHelper : NSObject {
    NSArray *_allowed;
    unsigned int _lastRef;
    NSMutableArray *_allowedClasses;
    BOOL expectsUnnestedCollection;
    BOOL decodedCollection;
}

@property (copy) NSError *decodeError;

- (id)init;
- (void)dealloc;
- (void)setAllowedClassNames:(id)a0;
- (id)allowedClassNames;
- (BOOL)classNameAllowed:(Class)a0;

@end
