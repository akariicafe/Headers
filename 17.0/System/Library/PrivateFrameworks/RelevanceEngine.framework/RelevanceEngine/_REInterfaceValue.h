@class _REInterfaceKey, NSArray, NSMapTable, NSHashTable;

@interface _REInterfaceValue : NSObject

@property (retain, nonatomic) _REInterfaceKey *type;
@property (retain, nonatomic) NSArray *conformedInterfaces;
@property (retain, nonatomic) NSHashTable *conformedProtocols;
@property (retain, nonatomic) NSMapTable *properties;
@property (retain, nonatomic) NSMapTable *methods;

- (void).cxx_destruct;

@end
