@class NSString, NSArray;

@interface DDUIPhysicalUnitGroup : NSObject

@property (readonly) NSString *name;
@property (readonly) NSArray *units;
@property (readonly) NSString *symbol;
@property (readonly) BOOL restrictedLinkification;

- (void).cxx_destruct;
- (id)initWithName:(id)a0 units:(id)a1 restricted:(BOOL)a2 symbol:(id)a3;
- (id)symbolNameForValue:(double)a0 unit:(id)a1;

@end
