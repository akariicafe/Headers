@class NSNumber, NSString;

@interface DEDSeedingFilerToken : NSObject

@property (readonly, nonatomic) NSNumber *entityID;
@property (readonly, nonatomic) NSString *token;
@property (readonly, nonatomic) NSString *dsid;
@property (readonly, nonatomic) long long submissionType;

- (void).cxx_destruct;
- (id)compiledEntityID;
- (id)initWithEntityID:(id)a0 type:(long long)a1 token:(id)a2 dsid:(id)a3;

@end
