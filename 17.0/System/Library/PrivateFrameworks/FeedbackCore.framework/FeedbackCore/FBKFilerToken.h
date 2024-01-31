@class NSNumber, NSString;

@interface FBKFilerToken : NSObject

@property (readonly, nonatomic) NSNumber *entityID;
@property (readonly, nonatomic) NSString *token;
@property (readonly, nonatomic) NSNumber *dsid;
@property (readonly, nonatomic) unsigned long long entityType;

- (void).cxx_destruct;
- (id)initWithEntityID:(id)a0 type:(unsigned long long)a1 token:(id)a2 dsid:(id)a3;

@end
