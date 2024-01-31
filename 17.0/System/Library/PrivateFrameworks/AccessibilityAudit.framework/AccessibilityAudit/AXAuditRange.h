@class NSString;

@interface AXAuditRange : NSObject <AXAuditTransportableObjectProtocol>

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
+ (void)registerTransportableObjectWithManager:(id)a0;

- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
