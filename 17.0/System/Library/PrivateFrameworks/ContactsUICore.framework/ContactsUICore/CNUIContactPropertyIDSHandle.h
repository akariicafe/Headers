@class NSString, CNContactProperty;

@interface CNUIContactPropertyIDSHandle : NSObject <CNUIIDSHandle>

@property (readonly, copy, nonatomic) NSString *idsID;
@property (readonly, copy, nonatomic) CNContactProperty *contactProperty;
@property (readonly, copy, nonatomic) NSString *_cnui_IDSIDRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)supportedContactPropertyKeys;
+ (id)idsIDForEmail:(id)a0;
+ (id)idsIDForPhoneNumber:(id)a0;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithContactProperty:(id)a0;

@end
