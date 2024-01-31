@class NSString, NSURL, NSArray;

@interface SSHarvestedApplicationMetadata : NSObject <BSXPCSecureCoding, SSLoggable>

@property (copy, nonatomic) NSString *userActivityTitle;
@property (copy, nonatomic) NSURL *userActivityURL;
@property (copy, nonatomic) NSArray *contentRects;
@property (nonatomic) BOOL canGenerateDocument;
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
