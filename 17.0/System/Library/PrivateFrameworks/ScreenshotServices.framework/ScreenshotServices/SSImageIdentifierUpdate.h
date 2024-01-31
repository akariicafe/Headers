@class NSString, BSSettings;

@interface SSImageIdentifierUpdate : NSObject <BSXPCSecureCoding, SSLoggable>

@property (copy, nonatomic) NSString *imageIdentifier;
@property (copy, nonatomic) NSString *environmentDescriptionIdentifier;
@property (nonatomic) BOOL success;
@property (readonly, nonatomic) BSSettings *bsSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *loggableDescription;

+ (BOOL)supportsBSXPCSecureCoding;

- (id)initWithBSXPCCoder:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)a0;

@end
