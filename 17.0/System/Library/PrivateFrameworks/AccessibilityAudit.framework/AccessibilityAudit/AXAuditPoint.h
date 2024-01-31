@class NSString;

@interface AXAuditPoint : NSObject <AXAuditTransportableObjectProtocol>

@property (nonatomic) struct CGPoint { double x; double y; } point;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createWithPoint:(struct CGPoint { double x0; double x1; })a0;
+ (void)registerTransportableObjectWithManager:(id)a0;

- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
