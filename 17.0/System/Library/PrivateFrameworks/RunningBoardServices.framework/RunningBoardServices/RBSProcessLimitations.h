@class NSString;

@interface RBSProcessLimitations : NSObject <RBSXPCSecureCoding>

@property (nonatomic) double runTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsRBSXPCSecureCoding;

@end
