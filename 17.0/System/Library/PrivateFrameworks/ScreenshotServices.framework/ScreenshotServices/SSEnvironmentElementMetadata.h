@class NSString, NSArray;

@interface SSEnvironmentElementMetadata : NSObject <BSXPCSecureCoding, SSLoggable>

@property (copy, nonatomic, setter=setUserActivityTitle:) NSString *userActivityTitle;
@property (copy, nonatomic) NSArray *rectsInElement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *loggableDescription;

+ (BOOL)supportsBSXPCSecureCoding;

- (id)initWithBSXPCCoder:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)_encodableRects;
- (id)_decodedRectsForEncodedRects:(id)a0;

@end
