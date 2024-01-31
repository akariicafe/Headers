@class NSMutableDictionary;

@interface MFPObjectTable : NSObject {
    NSMutableDictionary *mObjects;
}

- (id)init;
- (id)objectAtIndex:(int)a0;
- (void).cxx_destruct;
- (void)setObject:(id)a0 atIndex:(int)a1;

@end
