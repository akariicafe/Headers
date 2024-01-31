@class NSArray, NSString;

@interface PKSupply : NSObject

@property (readonly) NSArray *colors;
@property (readonly) int level;
@property (readonly) NSString *name;
@property (readonly) NSString *markerType;
@property (readonly) int lowLevel;
@property (readonly) int highLevel;
@property (readonly) long long supplyType;

+ (BOOL)isValidColorString:(const char *)a0;

- (id)description;
- (void).cxx_destruct;
- (id)initWithName:(const char *)a0 markerType:(const char *)a1 colors:(const char *)a2 level:(int)a3 lowLevel:(int)a4 highLevel:(int)a5;

@end
