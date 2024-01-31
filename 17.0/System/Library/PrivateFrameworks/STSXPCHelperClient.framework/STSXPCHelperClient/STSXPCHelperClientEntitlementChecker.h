@interface STSXPCHelperClientEntitlementChecker : NSObject <NSCopying> {
    BOOL _xpcHelperClientTransceiveProxyListenerAccess;
    int _clientProcessIdentifier;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
