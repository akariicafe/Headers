@class NSString, NSMutableArray;

@interface NMSObfuscatableDescription : NSObject

@property (retain, nonatomic) NSMutableArray *items;
@property (retain, nonatomic) NSString *prefixString;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)CPSafeDescription;
- (void)addObfuscatedDescription:(id)a0 value:(id)a1;
- (id)_descriptionObfuscated:(BOOL)a0;
- (void)addDescription:(id)a0 value:(id)a1;

@end
