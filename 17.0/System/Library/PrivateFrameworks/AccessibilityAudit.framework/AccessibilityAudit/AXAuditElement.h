@class AXElement, NSString;

@interface AXAuditElement : NSObject <AXAuditTransportableObjectProtocol, NSCopying>

@property (copy, nonatomic) AXElement *axElement;
@property (retain, nonatomic) id platformElementToken;
@property (copy, nonatomic) id accessibilityIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)auditElementWithElement:(id)a0 identifier:(id)a1;
+ (void)registerTransportableObjectWithManager:(id)a0;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)axElement;
- (void)setAxElement:(id)a0;
- (struct __AXUIElement { } *)createAxElementRefForXCTest;

@end
