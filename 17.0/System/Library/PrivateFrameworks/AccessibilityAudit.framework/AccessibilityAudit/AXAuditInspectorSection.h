@class NSString, NSMutableArray, NSArray;

@interface AXAuditInspectorSection : NSObject

@property (retain, nonatomic) NSMutableArray *_elementAttributes;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *title;
@property (readonly, retain, nonatomic) NSArray *elementAttributes;

+ (void)registerTransportableObjectWithManager:(id)a0;

- (id)init;
- (unsigned long long)hash;
- (void)addAttribute:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)elementAttributes;
- (id)addAttribute:(id)a0 performsAction:(BOOL)a1 humanReadable:(id)a2 settable:(BOOL)a3 valueType:(long long)a4 isInternal:(BOOL)a5;

@end
