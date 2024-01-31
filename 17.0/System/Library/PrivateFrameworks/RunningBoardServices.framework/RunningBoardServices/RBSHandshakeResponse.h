@class NSDictionary, NSString, RBSProcessHandle;

@interface RBSHandshakeResponse : NSObject <RBSXPCSecureCoding>

@property (retain, nonatomic) RBSProcessHandle *handle;
@property (retain, nonatomic) NSDictionary *assertionIdentifiersByOldIdentifier;
@property (retain, nonatomic) NSDictionary *assertionErrorsByOldIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsRBSXPCSecureCoding;

@end
