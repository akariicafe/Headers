@class NSString, NSDictionary;

@interface INIntentResponseDescription : NSObject <INIntentResponseDescriptionExport, NSCopying>

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) Class facadeClass;
@property (readonly, nonatomic) Class dataClass;
@property (readonly, copy, nonatomic) NSString *type;
@property (readonly, nonatomic) BOOL isPrivate;
@property (readonly, copy, nonatomic) NSDictionary *slotsByName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithName:(id)a0 facadeClass:(Class)a1 dataClass:(Class)a2 type:(id)a3 isPrivate:(BOOL)a4 slotsByName:(id)a5;

@end
