@class NSString;

@interface AXAuditSize : NSObject <AXAuditTransportableObjectProtocol>

@property (nonatomic) struct CGSize { double width; double height; } size;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createWithSize:(struct CGSize { double x0; double x1; })a0;
+ (void)registerTransportableObjectWithManager:(id)a0;

- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
