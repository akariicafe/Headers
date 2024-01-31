@class NSString;

@interface BSCanonicalOrientationMapResolver : NSObject <BSInterfaceOrientationMapResolving, BSXPCSecureCoding> {
    long long _targetOrientation;
    long long _currentOrientation;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;

- (long long)interfaceOrientationForSupportedOrientations:(unsigned long long)a0 preferredOrientation:(long long)a1;
- (id)initWithBSXPCCoder:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithTargetOrientation:(long long)a0 currentOrientation:(long long)a1;

@end
